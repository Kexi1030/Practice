#include "qlogger.h"

client::Logger::Logger()
{
    filename = LOGFILEHEADDER;
    filename += QDateTime::currentDateTime().toString("yyyy_MM_dd_hh_mm_ss");
    filename += ".txt";
    file.setFileName(filename);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
//   QIODevice::Text When reading, the end-of-line terminators are translated to '\n'.
//            When writing, the end-of-line terminators are translated
    //            to the local encoding, for example '\r\n' for Win32.
}

void client::Logger::log(const QString msg)
{
    mutex.lock(); // 由于多线程 所以需要互斥写

    file.open(QIODevice::Append|QIODevice::Text);
    QTextStream ds;
    ds.setDevice(&file);

    QString fullmsg = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss : ");
    fullmsg += msg;

    qDebug()<<fullmsg;
    emit newLog(fullmsg); // 触发信号newLog
    ds<<fullmsg;

    file.close();
    mutex.unlock();

}
