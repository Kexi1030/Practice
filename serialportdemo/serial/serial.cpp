#include "serial.h"
#include "ui_serial.h"

Serial::Serial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Serial)
{
    ui->setupUi(this);
    system_init();
}

Serial::~Serial()
{
    delete ui;
}

/*---------------------------------------------
 *      functions
 *--------------------------------------------*/
void Serial::system_init()
{
    // port config 设置奇偶校验 数据位 停止位
    global_port.setParity(QSerialPort::NoParity);
    global_port.setDataBits(QSerialPort::Data8);
    global_port.setStopBits(QSerialPort::OneStop);

    connect(ui->btn_open,&QPushButton::clicked,this,&Serial::btn_open_port);
    connect(ui->btn_send,&QPushButton::clicked,this,&Serial::btn_send_data);
    connect(&global_port,&QSerialPort::readyRead,this,&Serial::receive_date);
    connect(ui->btn_close,&QPushButton::clicked,this,&Serial::btn_close_port);
}
/*---------------------------------------------
 *      slots 注意槽函数的参数和信号函数的参数需要一致
 *--------------------------------------------*/
void Serial::btn_open_port()
{
    switch(ui->cmb_port_name->currentIndex())
    {
        case 0:
            global_port.setPortName("COM1");
            break;
        case 1:
            global_port.setPortName("COM2");
            break;
        case 2:
            global_port.setPortName("COM3");
            break;
        case 3:
            global_port.setPortName("COM4");
            break;
        case 4:
            global_port.setPortName("COM5");
            break;
        case 5:
            global_port.setPortName("COM6");
            break;
        case 6:
            global_port.setPortName("COM7");
            break;
        default:
            global_port.setPortName("COM8");
            break;
    }

    switch(ui->cmb_baud_rate->currentIndex())
    {
        case 0:
            global_port.setBaudRate(QSerialPort::Baud115200);
            break;
        case 1:
            global_port.setBaudRate(QSerialPort::Baud57600);
            break;
        case 2:
            global_port.setBaudRate(QSerialPort::Baud38400);
            break;
        case 3:
            global_port.setBaudRate(QSerialPort::Baud19200);
            break;
        case 4:
            global_port.setBaudRate(QSerialPort::Baud9600);
            break;
        case 5:
            global_port.setBaudRate(QSerialPort::Baud4800);
            break;
        case 6:
            global_port.setBaudRate(QSerialPort::Baud2400);
            break;
        default:
            global_port.setBaudRate(QSerialPort::Baud1200);
            break;
    }

    global_port.open(QIODevice::ReadWrite);
    ui->lab_status->setText("Connected");
    qDebug()<<"配置完成";
}

void Serial::btn_send_data()
{
    QString data = ui->lint_send_data->text();
    QByteArray array = data.toLatin1();
    global_port.write(array);
}

void Serial::receive_date()
{
    QByteArray array = global_port.readAll(); // 一次性读取
    qDebug()<<array;
    if(ui->checkBox->checkState() == Qt::Checked)
    {
        ui->plainTextEdit->insertPlainText(QString(array.toHex()));
    }
    else
    {
        ui->plainTextEdit->insertPlainText(QString(array));
    }
}

void Serial::btn_close_port()
{
    global_port.close();
    ui->lab_status->setText("Disconnected");
}
