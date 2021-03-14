#include "signupdialog.h"
#include "ui_signupdialog.h"
#include<QMessageBox>

signupdialog::signupdialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signupdialog)
{
    ui->setupUi(this);
}

signupdialog::~signupdialog()
{
    delete ui;
}

void signupdialog::on_accountInput_textChanged(const QString &arg1)
{
    account = arg1;
}

void signupdialog::on_passwdInput_textChanged(const QString &arg1)
{
    passwd1 = arg1;
}

void signupdialog::on_passwdInput_2_textChanged(const QString &arg1)
{
    passwd2 = arg1;
}

void signupdialog::on_signupButton_clicked()
{
    if (passwd1 != passwd2)
    {
        ShowMsg("两次输入的密码不一致，请重新输入");
        ui->passwdInput->clear();
        ui->passwdInput_2->clear();
        return;
    }
    if (IsWeak(passwd1))
    {
        ShowMsg("密码过弱 请重新输入!");
        ui->passwdInput->clear();
        ui->passwdInput_2->clear();
        return;
    }
    this->accept(); // 隐藏Qdialog 返回accepted
}

bool signupdialog::IsWeak(const QString pw) // 判断密码是否太弱
{
    if (pw.size() < 8)
        return true;

    int str = 0;
    for (int i = 0; i < pw.size(); ++i)
        if ((pw[i] >= 'a') && (pw[i] <= 'z'))
        {
            ++str;
            break;
        }
    for (int i = 0; i < pw.size(); ++i)
        if ((pw[i] >= '0') && (pw[i] <= '9'))
        {
            ++str;
            break;
        }
    for (int i = 0; i < pw.size(); ++i)
        if ((pw[i] >= 'A') && (pw[i] <= 'Z'))
        {
            ++str;
            break;
        }
    if (str < 3)
        return true;
    return false;
}

void signupdialog::ShowMsg(const QString msg)
{
    QMessageBox msgbox;
    msgbox.setText(msg);
    msgbox.exec();
}
