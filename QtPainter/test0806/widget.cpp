#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
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

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this); // 相当于QPainter *painter = new QPainter(this);
    //painter.drawLine(0,0,300,300);
    //painter.setRenderHint(QPainter::Antialiasing,true); // 设置曲线平滑
    //painter.drawArc(30,30,100,100,30*16,140*16);// 开始x 开始y 宽 高 角度 结束角度
    //painter.drawPie(50,50,100,100,0,90*16);

    //painter.drawRect(200,100,150,100);
    //painter.fillRect(100,100,100,100,QBrush(QColor(255,0,0)));

    //原点文字
    painter.drawText(10,210,"0");

    //绘制坐标轴
    painter.drawLine(10,200,310,200);
    //分割水平轴
    for(int i = 2;i<31;i++)
    {
        painter.drawLine(10*i,195,10*i,200);
        if(i%4==0)
            painter.drawText(10*i,210,QString::number(10*i));
    }
    painter.drawText(300,210,"水平轴");
    //绘制Y轴
    painter.drawLine(10,200,10,10);
    for(int i=2;i<20;i++)
    {
        painter.drawLine(10,10*i,15,10*i);
        if(i%4==0)
            painter.drawText(15,10*(20-i),QString::number(10*i));
    }
    painter.drawText(10,10,"编程创造城市网络点击量");

    // 生成随机数，产生[0,190]之间的随机整数
    int x1,y1,x2,y2;
    x1 = 10;
    y1 = qrand()%191;
    for(int i = 2;i<30;i++){
        x2 = 10*i;
        y2 = qrand()%191; // 表示点击量
        painter.setPen(QColor(0,0,0));
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2;
        y1 = y2;
        painter.setPen(QColor(255,0,0));
        painter.setFont(QFont("隶书",30));
        // 画点
        painter.drawPoint(QPoint(x2,y2));

    }
}

