#ifndef QLOGGER_H
#define QLOGGER_H
#include <QThread>
#include <QFile>
#include <QTime>
#include <QTextStream>
#include <iostream>
#include <QIODevice> // 用于对输入输出设备进行管理
#include <QMutex> //QMutex类提供的是线程之间的访问顺序化
#include <QDebug>

namespace client {
const QString LOGFILEHEADDER = "TMYClientLog";

class Logger : public QObject
{
    Q_OBJECT; // 只有加入Q_OBJECT宏才可以使用signal slot机制
public:
    Logger();
    QString filename;
    QFile file;
    void log(const QString);
private:
    QMutex mutex;

signals:
    void newLog(QString);
};
extern Logger logger; // 声明外部变量
}


#endif // QLOGGER_H
