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
    QLineEdit *lineEdit_IP;
    QLabel *label;
    QPushButton *btn_set_IP;

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
        lineEdit_IP = new QLineEdit(SettingDlg);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(80, 20, 113, 20));
        label = new QLabel(SettingDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        btn_set_IP = new QPushButton(SettingDlg);
        btn_set_IP->setObjectName(QStringLiteral("btn_set_IP"));
        btn_set_IP->setGeometry(QRect(220, 20, 75, 23));

        retranslateUi(SettingDlg);

        QMetaObject::connectSlotsByName(SettingDlg);
    } // setupUi

    void retranslateUi(QWidget *SettingDlg)
    {
        SettingDlg->setWindowTitle(QApplication::translate("SettingDlg", "SettingDlg", 0));
        label->setText(QApplication::translate("SettingDlg", "\347\233\270\346\234\272IP:", 0));
        btn_set_IP->setText(QApplication::translate("SettingDlg", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingDlg: public Ui_SettingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDLG_H
