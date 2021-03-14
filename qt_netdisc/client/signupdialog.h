#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class signupdialog;
}

class signupdialog : public QDialog
{
    Q_OBJECT

public:
    explicit signupdialog(QWidget *parent = nullptr);
    QString account, passwd1, passwd2;
    ~signupdialog();

private slots:
    void on_accountInput_textChanged(const QString &arg1);

    void on_passwdInput_textChanged(const QString &arg1);

    void on_passwdInput_2_textChanged(const QString &arg1);

    void on_signupButton_clicked();

private:
    Ui::signupdialog *ui;

    bool IsWeak(const QString pw);
    void ShowMsg(const QString msg);
};

#endif // SIGNUPDIALOG_H
