#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <server.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();
    void mygiveMsg(QString,int); // 窗体的槽 用来接受Qstring
    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    Server *server; //新增成员变量Server 使用指针不分配内存空间
    QTcpSocket *sock;
};
#endif // WIDGET_H
