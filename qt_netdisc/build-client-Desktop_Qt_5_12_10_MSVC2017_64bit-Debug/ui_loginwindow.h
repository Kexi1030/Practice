/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QPushButton *signinButton;
    QPushButton *signupButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *accountinput;
    QLineEdit *passwordinput;

    void setupUi(QWidget *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName(QString::fromUtf8("loginwindow"));
        loginwindow->resize(410, 95);
        signinButton = new QPushButton(loginwindow);
        signinButton->setObjectName(QString::fromUtf8("signinButton"));
        signinButton->setGeometry(QRect(320, 20, 80, 20));
        signupButton = new QPushButton(loginwindow);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));
        signupButton->setGeometry(QRect(320, 50, 80, 20));
        widget = new QWidget(loginwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 71, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        widget1 = new QWidget(loginwindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(100, 11, 211, 71));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        accountinput = new QLineEdit(widget1);
        accountinput->setObjectName(QString::fromUtf8("accountinput"));

        verticalLayout_2->addWidget(accountinput);

        passwordinput = new QLineEdit(widget1);
        passwordinput->setObjectName(QString::fromUtf8("passwordinput"));

        verticalLayout_2->addWidget(passwordinput);


        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QWidget *loginwindow)
    {
        loginwindow->setWindowTitle(QApplication::translate("loginwindow", "Form", nullptr));
        signinButton->setText(QApplication::translate("loginwindow", "\347\231\273\351\231\206", nullptr));
        signupButton->setText(QApplication::translate("loginwindow", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("loginwindow", "\350\264\246\346\210\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("loginwindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        passwordinput->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
