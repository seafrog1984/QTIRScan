/********************************************************************************
** Form generated from reading UI file 'SetAuthDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETAUTHDLG_H
#define UI_SETAUTHDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetAuthDlg
{
public:
    QListView *listView;
    QLabel *label;
    QPushButton *btn_get_user;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;

    void setupUi(QWidget *SetAuthDlg)
    {
        if (SetAuthDlg->objectName().isEmpty())
            SetAuthDlg->setObjectName(QStringLiteral("SetAuthDlg"));
        SetAuthDlg->resize(660, 368);
        SetAuthDlg->setStyleSheet(QLatin1String("QWidget{color: rgb(255, 255, 255);\n"
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
        listView = new QListView(SetAuthDlg);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 60, 101, 192));
        label = new QLabel(SetAuthDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 54, 12));
        btn_get_user = new QPushButton(SetAuthDlg);
        btn_get_user->setObjectName(QStringLiteral("btn_get_user"));
        btn_get_user->setGeometry(QRect(50, 270, 75, 23));
        groupBox = new QGroupBox(SetAuthDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 30, 371, 221));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 30, 89, 16));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(200, 30, 89, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 54, 12));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 113, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 54, 12));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 110, 113, 20));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 170, 71, 16));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(140, 170, 71, 16));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(250, 170, 71, 16));
        radioButton_3 = new QRadioButton(SetAuthDlg);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(190, 280, 89, 16));
        radioButton_4 = new QRadioButton(SetAuthDlg);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(310, 280, 89, 16));
        radioButton_5 = new QRadioButton(SetAuthDlg);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(430, 280, 89, 16));

        retranslateUi(SetAuthDlg);

        QMetaObject::connectSlotsByName(SetAuthDlg);
    } // setupUi

    void retranslateUi(QWidget *SetAuthDlg)
    {
        SetAuthDlg->setWindowTitle(QApplication::translate("SetAuthDlg", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("SetAuthDlg", "\347\224\250\346\210\267\345\210\227\350\241\250\357\274\232", 0));
        btn_get_user->setText(QApplication::translate("SetAuthDlg", "\350\216\267\345\217\226", 0));
        groupBox->setTitle(QApplication::translate("SetAuthDlg", "\346\226\260\345\242\236\347\224\250\346\210\267", 0));
        radioButton->setText(QApplication::translate("SetAuthDlg", "\346\231\256\351\200\232\347\224\250\346\210\267", 0));
        radioButton_2->setText(QApplication::translate("SetAuthDlg", "\347\256\241\347\220\206\345\221\230", 0));
        label_2->setText(QApplication::translate("SetAuthDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("SetAuthDlg", "\345\257\206\347\240\201\357\274\232", 0));
        checkBox->setText(QApplication::translate("SetAuthDlg", "\345\233\276\345\203\217\346\211\253\346\217\217", 0));
        checkBox_2->setText(QApplication::translate("SetAuthDlg", "\345\233\276\345\203\217\345\210\206\346\236\220", 0));
        checkBox_3->setText(QApplication::translate("SetAuthDlg", "\347\256\241\347\220\206\345\221\230", 0));
        radioButton_3->setText(QApplication::translate("SetAuthDlg", "\346\226\260\345\242\236", 0));
        radioButton_4->setText(QApplication::translate("SetAuthDlg", "\345\210\240\351\231\244", 0));
        radioButton_5->setText(QApplication::translate("SetAuthDlg", "\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class SetAuthDlg: public Ui_SetAuthDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETAUTHDLG_H