/********************************************************************************
** Form generated from reading UI file 'serial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_H
#define UI_SERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lint_send_data;
    QPushButton *btn_send;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lab_status;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cmb_port_name;
    QComboBox *cmb_baud_rate;
    QCheckBox *checkBox;
    QPushButton *btn_open;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Serial)
    {
        if (Serial->objectName().isEmpty())
            Serial->setObjectName(QString::fromUtf8("Serial"));
        Serial->resize(685, 429);
        centralwidget = new QWidget(Serial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lint_send_data = new QLineEdit(groupBox);
        lint_send_data->setObjectName(QString::fromUtf8("lint_send_data"));

        horizontalLayout->addWidget(lint_send_data);

        btn_send = new QPushButton(groupBox);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));

        horizontalLayout->addWidget(btn_send);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lab_status = new QLabel(groupBox_2);
        lab_status->setObjectName(QString::fromUtf8("lab_status"));
        lab_status->setMinimumSize(QSize(110, 0));
        lab_status->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lab_status);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cmb_port_name = new QComboBox(groupBox_2);
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->addItem(QString());
        cmb_port_name->setObjectName(QString::fromUtf8("cmb_port_name"));

        verticalLayout_2->addWidget(cmb_port_name);

        cmb_baud_rate = new QComboBox(groupBox_2);
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->addItem(QString());
        cmb_baud_rate->setObjectName(QString::fromUtf8("cmb_baud_rate"));

        verticalLayout_2->addWidget(cmb_baud_rate);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        btn_open = new QPushButton(groupBox_2);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));

        verticalLayout_2->addWidget(btn_open);

        btn_close = new QPushButton(groupBox_2);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        verticalLayout_2->addWidget(btn_close);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(groupBox_2);

        Serial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Serial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 685, 23));
        Serial->setMenuBar(menubar);
        statusbar = new QStatusBar(Serial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Serial->setStatusBar(statusbar);

        retranslateUi(Serial);

        QMetaObject::connectSlotsByName(Serial);
    } // setupUi

    void retranslateUi(QMainWindow *Serial)
    {
        Serial->setWindowTitle(QApplication::translate("Serial", "Serial", nullptr));
        groupBox->setTitle(QString());
        btn_send->setText(QApplication::translate("Serial", "Send", nullptr));
        groupBox_2->setTitle(QString());
        lab_status->setText(QApplication::translate("Serial", "Disconnected", nullptr));
        cmb_port_name->setItemText(0, QApplication::translate("Serial", "COM1", nullptr));
        cmb_port_name->setItemText(1, QApplication::translate("Serial", "COM2", nullptr));
        cmb_port_name->setItemText(2, QApplication::translate("Serial", "COM3", nullptr));
        cmb_port_name->setItemText(3, QApplication::translate("Serial", "COM4", nullptr));
        cmb_port_name->setItemText(4, QApplication::translate("Serial", "COM5", nullptr));
        cmb_port_name->setItemText(5, QApplication::translate("Serial", "COM6", nullptr));
        cmb_port_name->setItemText(6, QApplication::translate("Serial", "COM7", nullptr));
        cmb_port_name->setItemText(7, QApplication::translate("Serial", "COM8", nullptr));

        cmb_baud_rate->setItemText(0, QApplication::translate("Serial", "115200", nullptr));
        cmb_baud_rate->setItemText(1, QApplication::translate("Serial", "57600", nullptr));
        cmb_baud_rate->setItemText(2, QApplication::translate("Serial", "38400", nullptr));
        cmb_baud_rate->setItemText(3, QApplication::translate("Serial", "19200", nullptr));
        cmb_baud_rate->setItemText(4, QApplication::translate("Serial", "9600", nullptr));
        cmb_baud_rate->setItemText(5, QApplication::translate("Serial", "4800", nullptr));
        cmb_baud_rate->setItemText(6, QApplication::translate("Serial", "2400", nullptr));
        cmb_baud_rate->setItemText(7, QApplication::translate("Serial", "1200", nullptr));

        checkBox->setText(QApplication::translate("Serial", "Hex", nullptr));
        btn_open->setText(QApplication::translate("Serial", "Open", nullptr));
        btn_close->setText(QApplication::translate("Serial", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
