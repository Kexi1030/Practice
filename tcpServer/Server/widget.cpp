#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    int port = ui->leport->text().toInt(); // 获取文本框中的数据 转成int

    // 实例化server
    server = new Server(port);
    connect(server,SIGNAL(giveMsg(QString,int)),this,SLOT(mygiveMsg(QString,int))); // 将server和窗体关联在一起 用来传递数据
}

void Widget::mygiveMsg(QString str,int type)
{
    if(type==1)
        ui->tereceive->setText(str);
    else if (type == 2)
        ui->lwlog->addItem(str);
}

void Widget::on_pushButton_3_clicked()
{
    QByteArray arr = ui->tesend->toPlainText().toUtf8();
    sock = server->getSock();
    sock->write(arr);
}
