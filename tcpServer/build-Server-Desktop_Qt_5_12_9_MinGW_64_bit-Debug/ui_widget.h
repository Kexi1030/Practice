/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *leport;
    QPushButton *pushButton;
    QListWidget *lwlog;
    QTextEdit *tereceive;
    QTextEdit *tesend;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(485, 368);
        leport = new QLineEdit(Widget);
        leport->setObjectName(QString::fromUtf8("leport"));
        leport->setGeometry(QRect(10, 10, 113, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 10, 75, 23));
        lwlog = new QListWidget(Widget);
        lwlog->setObjectName(QString::fromUtf8("lwlog"));
        lwlog->setGeometry(QRect(240, 10, 241, 351));
        tereceive = new QTextEdit(Widget);
        tereceive->setObjectName(QString::fromUtf8("tereceive"));
        tereceive->setGeometry(QRect(10, 60, 201, 121));
        tesend = new QTextEdit(Widget);
        tesend->setObjectName(QString::fromUtf8("tesend"));
        tesend->setGeometry(QRect(10, 190, 201, 121));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 54, 12));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 330, 75, 23));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 330, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "TCP\346\234\215\345\212\241\347\253\257", nullptr));
        leport->setPlaceholderText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\347\233\221\345\220\254", nullptr));
        label->setText(QApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\345\271\277\346\222\255", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
