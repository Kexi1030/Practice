#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include"logger.h"

extern client::Logger client::logger;

namespace Ui {
class loginwindow;
}

class loginwindow : public QWidget
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = nullptr);
    ~loginwindow();

private slots:
    void on_signinButton_clicked();

    void on_signupButton_clicked();

    void on_accountinput_textChanged(const QString &arg1);

    void on_passwordinput_textChanged(const QString &arg1);

private:
    Ui::loginwindow *ui;
    QString account ,password;
    QString ip, ports, session, syncPath;

    void showMsg(QString msg);
    void reconnect();
};

#endif // LOGINWINDOW_H
