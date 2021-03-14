#ifndef SERIAL_H
#define SERIAL_H

#include <QMainWindow>

/*---------user-------------------*/
#include <QSerialPort>
#include <QDebug>
/*----------------------------*/

QT_BEGIN_NAMESPACE
namespace Ui { class Serial; }
QT_END_NAMESPACE

class Serial : public QMainWindow
{
    Q_OBJECT

public:
    Serial(QWidget *parent = nullptr);
    ~Serial();

private slots: // 槽函数
    void btn_open_port(); // 打开按钮
    void btn_send_data(); // 发送按钮
    void btn_close_port(); // 关闭按钮
    //receive data
    void receive_date(); // 接受数据

private:
    Ui::Serial *ui;
    /*-------function--------*/
    void system_init();
    /*-------variable--------*/

    QSerialPort global_port;
};
#endif // SERIAL_H
