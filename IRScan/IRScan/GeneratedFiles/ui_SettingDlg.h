/********************************************************************************
** Form generated from reading UI file 'SettingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDLG_H
#define UI_SETTINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDlg
{
public:
    QLineEdit *lineEdit_camIP;
    QLabel *label;
    QPushButton *btn_set_Par;
    QLabel *label_2;
    QLineEdit *lineEdit_servIP;
    QLabel *label_3;
    QLineEdit *lineEdit_port;
    QLabel *label_4;
    QLineEdit *lineEdit_uport;
    QLabel *label_5;
    QLineEdit *lineEdit_hosCode;

    void setupUi(QWidget *SettingDlg)
    {
        if (SettingDlg->objectName().isEmpty())
            SettingDlg->setObjectName(QStringLiteral("SettingDlg"));
        SettingDlg->resize(400, 300);
        SettingDlg->setStyleSheet(QLatin1String("QWidget{color: rgb(255, 255, 255);\n"
"background-color: rgb(15, 21, 42);\n"
"}\n"
"QLineEdit{\n"
"color: rgb(0,0 ,0 );\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(18, 59, 101);\n"
"border:0px;\n"
"}"));
        lineEdit_camIP = new QLineEdit(SettingDlg);
        lineEdit_camIP->setObjectName(QStringLiteral("lineEdit_camIP"));
        lineEdit_camIP->setGeometry(QRect(130, 20, 113, 20));
        label = new QLabel(SettingDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        btn_set_Par = new QPushButton(SettingDlg);
        btn_set_Par->setObjectName(QStringLiteral("btn_set_Par"));
        btn_set_Par->setGeometry(QRect(140, 260, 75, 23));
        label_2 = new QLabel(SettingDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 54, 12));
        lineEdit_servIP = new QLineEdit(SettingDlg);
        lineEdit_servIP->setObjectName(QStringLiteral("lineEdit_servIP"));
        lineEdit_servIP->setGeometry(QRect(130, 70, 113, 20));
        label_3 = new QLabel(SettingDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 54, 12));
        lineEdit_port = new QLineEdit(SettingDlg);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(130, 110, 113, 20));
        label_4 = new QLabel(SettingDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 54, 12));
        lineEdit_uport = new QLineEdit(SettingDlg);
        lineEdit_uport->setObjectName(QStringLiteral("lineEdit_uport"));
        lineEdit_uport->setGeometry(QRect(130, 160, 113, 20));
        label_5 = new QLabel(SettingDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 210, 54, 12));
        lineEdit_hosCode = new QLineEdit(SettingDlg);
        lineEdit_hosCode->setObjectName(QStringLiteral("lineEdit_hosCode"));
        lineEdit_hosCode->setGeometry(QRect(130, 210, 113, 20));

        retranslateUi(SettingDlg);

        QMetaObject::connectSlotsByName(SettingDlg);
    } // setupUi

    void retranslateUi(QWidget *SettingDlg)
    {
        SettingDlg->setWindowTitle(QApplication::translate("SettingDlg", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("SettingDlg", "\347\233\270\346\234\272IP:", 0));
        btn_set_Par->setText(QApplication::translate("SettingDlg", "\344\277\256\346\224\271", 0));
        label_2->setText(QApplication::translate("SettingDlg", "\346\234\215\345\212\241\345\231\250IP:", 0));
        label_3->setText(QApplication::translate("SettingDlg", "\346\225\260\346\215\256\347\253\257\345\217\243:", 0));
        label_4->setText(QApplication::translate("SettingDlg", "\347\224\250\346\210\267\347\253\257\345\217\243\357\274\232", 0));
        label_5->setText(QApplication::translate("SettingDlg", "\345\215\225\344\275\215\347\274\226\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingDlg: public Ui_SettingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDLG_H
