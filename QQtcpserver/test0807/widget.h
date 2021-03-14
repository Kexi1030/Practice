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

private:
    Ui::Widget *ui;
    Server server; // 加入到成员列表就代表了new调用了构造函数 此时已经开始listen
};
#endif // WIDGET_H
