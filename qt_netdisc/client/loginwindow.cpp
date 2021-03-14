#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "signupdialog.h"

#include <QMessageBox>
#include <QTextStream>
#include <QFile>

loginwindow::loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginwindow)
{
    ui->setupUi(this);
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_signinButton_clicked()
{

}

void loginwindow::on_signupButton_clicked()
{

}

void loginwindow::on_accountinput_textChanged(const QString &arg1)
{
    account = arg1;
}

void loginwindow::on_passwordinput_textChanged(const QString &arg1)
{
    password = arg1;
}

void loginwindow::showMsg(QString msg)
{
    QMessageBox msgbox;
    msgbox.setText(msg);
    msgbox.exec();
}
