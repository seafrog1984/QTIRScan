/********************************************************************************
** Form generated from reading UI file 'IRScan.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRSCAN_H
#define UI_IRSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IRScanClass
{
public:
    QAction *imgScanAct;
    QAction *imgSysAct;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageScan;
    QGroupBox *groupBox_10;
    QToolButton *toolButton_27;
    QToolButton *toolButton_31;
    QToolButton *toolButton_30;
    QToolButton *toolButton_32;
    QGroupBox *groupBox_11;
    QLineEdit *lineEdit;
    QToolButton *toolButton_33;
    QToolButton *toolButton_34;
    QToolButton *toolButton_35;
    QToolButton *toolButton_36;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_12;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QToolButton *toolButton_37;
    QLineEdit *lineEdit_10;
    QLabel *label_18;
    QToolButton *toolButton_49;
    QLineEdit *lineEdit_9;
    QLabel *label_19;
    QToolButton *toolButton_50;
    QGroupBox *groupBox_20;
    QToolButton *toolButton_51;
    QToolButton *toolButton_52;
    QToolButton *toolButton_53;
    QToolButton *toolButton_54;
    QToolButton *toolButton_55;
    QToolButton *toolButton_56;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QGroupBox *groupBox_19;
    QToolButton *toolButton_57;
    QToolButton *toolButton_58;
    QToolButton *toolButton_59;
    QToolButton *toolButton_60;
    QToolButton *toolButton_61;
    QWidget *page_sys;
    QGroupBox *groupBox_21;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_19;
    QGroupBox *groupBox_22;
    QToolButton *userAreaBt_2;
    QLabel *label_23;
    QToolButton *toolBarExpandBt_2;
    QLabel *label_24;
    QGroupBox *groupBox_23;
    QToolButton *sysSettingBt_2;
    QLabel *label_25;
    QLabel *label_26;
    QToolButton *sysSettingBt_3;
    QLabel *label_27;
    QToolButton *sysSettingBt_4;
    QLabel *label_28;
    QToolButton *sysSettingBt_5;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QWidget *widget;
    QLabel *label_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QWidget *page_4;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *IRScanClass)
    {
        if (IRScanClass->objectName().isEmpty())
            IRScanClass->setObjectName(QStringLiteral("IRScanClass"));
        IRScanClass->resize(1495, 830);
        IRScanClass->setStyleSheet(QLatin1String("background-color: rgb(15, 21, 42);\n"
"color: rgb(255, 255, 255);"));
        imgScanAct = new QAction(IRScanClass);
        imgScanAct->setObjectName(QStringLiteral("imgScanAct"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/IRScan/Scan-Sel"), QSize(), QIcon::Normal, QIcon::Off);
        imgScanAct->setIcon(icon);
        imgSysAct = new QAction(IRScanClass);
        imgSysAct->setObjectName(QStringLiteral("imgSysAct"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/IRScan/Sys"), QSize(), QIcon::Normal, QIcon::Off);
        imgSysAct->setIcon(icon1);
        centralWidget = new QWidget(IRScanClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 100));
        stackedWidget->setMaximumSize(QSize(16777215, 100));
        stackedWidget->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(15, 21, 42);"));
        pageScan = new QWidget();
        pageScan->setObjectName(QStringLiteral("pageScan"));
        groupBox_10 = new QGroupBox(pageScan);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 0, 191, 90));
        groupBox_10->setMinimumSize(QSize(0, 90));
        groupBox_10->setMaximumSize(QSize(16777215, 90));
        groupBox_10->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        toolButton_27 = new QToolButton(groupBox_10);
        toolButton_27->setObjectName(QStringLiteral("toolButton_27"));
        toolButton_27->setGeometry(QRect(60, 30, 32, 50));
        toolButton_27->setMinimumSize(QSize(32, 50));
        toolButton_27->setMaximumSize(QSize(32, 50));
        toolButton_27->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/IRScan/Scan-Scan"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_27->setIcon(icon2);
        toolButton_27->setIconSize(QSize(20, 20));
        toolButton_27->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_31 = new QToolButton(groupBox_10);
        toolButton_31->setObjectName(QStringLiteral("toolButton_31"));
        toolButton_31->setGeometry(QRect(100, 30, 32, 50));
        toolButton_31->setMinimumSize(QSize(32, 50));
        toolButton_31->setMaximumSize(QSize(32, 50));
        toolButton_31->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/IRScan/Scan-Del"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_31->setIcon(icon3);
        toolButton_31->setIconSize(QSize(20, 20));
        toolButton_31->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_30 = new QToolButton(groupBox_10);
        toolButton_30->setObjectName(QStringLiteral("toolButton_30"));
        toolButton_30->setGeometry(QRect(20, 30, 32, 50));
        toolButton_30->setMinimumSize(QSize(32, 50));
        toolButton_30->setMaximumSize(QSize(32, 50));
        toolButton_30->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/IRScan/Scan-Log"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_30->setIcon(icon4);
        toolButton_30->setIconSize(QSize(20, 20));
        toolButton_30->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_32 = new QToolButton(groupBox_10);
        toolButton_32->setObjectName(QStringLiteral("toolButton_32"));
        toolButton_32->setGeometry(QRect(140, 30, 32, 50));
        toolButton_32->setMinimumSize(QSize(32, 50));
        toolButton_32->setMaximumSize(QSize(32, 50));
        toolButton_32->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/IRScan/Scan-Change"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_32->setIcon(icon5);
        toolButton_32->setIconSize(QSize(20, 20));
        toolButton_32->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        groupBox_11 = new QGroupBox(pageScan);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(210, 0, 190, 90));
        groupBox_11->setMinimumSize(QSize(0, 90));
        groupBox_11->setMaximumSize(QSize(16777215, 90));
        groupBox_11->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        lineEdit = new QLineEdit(groupBox_11);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 30, 51, 16));
        lineEdit->setMinimumSize(QSize(0, 16));
        lineEdit->setMaximumSize(QSize(16777215, 16));
        toolButton_33 = new QToolButton(groupBox_11);
        toolButton_33->setObjectName(QStringLiteral("toolButton_33"));
        toolButton_33->setGeometry(QRect(50, 30, 16, 16));
        toolButton_33->setMinimumSize(QSize(16, 16));
        toolButton_33->setMaximumSize(QSize(16, 16));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/IRScan/Scan-Left"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_33->setIcon(icon6);
        toolButton_34 = new QToolButton(groupBox_11);
        toolButton_34->setObjectName(QStringLiteral("toolButton_34"));
        toolButton_34->setGeometry(QRect(30, 30, 16, 16));
        toolButton_34->setMinimumSize(QSize(16, 16));
        toolButton_34->setMaximumSize(QSize(16, 16));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/IRScan/Scan-DLeft"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_34->setIcon(icon7);
        toolButton_35 = new QToolButton(groupBox_11);
        toolButton_35->setObjectName(QStringLiteral("toolButton_35"));
        toolButton_35->setGeometry(QRect(130, 30, 16, 16));
        toolButton_35->setMinimumSize(QSize(16, 16));
        toolButton_35->setMaximumSize(QSize(16, 16));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/IRScan/Scan-Right"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_35->setIcon(icon8);
        toolButton_36 = new QToolButton(groupBox_11);
        toolButton_36->setObjectName(QStringLiteral("toolButton_36"));
        toolButton_36->setGeometry(QRect(150, 30, 16, 16));
        toolButton_36->setMinimumSize(QSize(16, 16));
        toolButton_36->setMaximumSize(QSize(16, 16));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/IRScan/Scan-DightR"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_36->setIcon(icon9);
        lineEdit_2 = new QLineEdit(groupBox_11);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 60, 51, 20));
        lineEdit_3 = new QLineEdit(groupBox_11);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 60, 51, 20));
        groupBox_12 = new QGroupBox(pageScan);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(420, 0, 501, 90));
        groupBox_12->setMinimumSize(QSize(0, 90));
        groupBox_12->setMaximumSize(QSize(16777215, 90));
        groupBox_12->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        dateEdit = new QDateEdit(groupBox_12);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(80, 20, 110, 22));
        label = new QLabel(groupBox_12);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 25, 54, 12));
        label_3 = new QLabel(groupBox_12);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 55, 54, 12));
        dateEdit_2 = new QDateEdit(groupBox_12);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(80, 50, 110, 22));
        toolButton_37 = new QToolButton(groupBox_12);
        toolButton_37->setObjectName(QStringLiteral("toolButton_37"));
        toolButton_37->setGeometry(QRect(200, 20, 32, 50));
        toolButton_37->setMinimumSize(QSize(32, 50));
        toolButton_37->setMaximumSize(QSize(50, 166667));
        toolButton_37->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/IRScan/Scan-Filter"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_37->setIcon(icon10);
        toolButton_37->setIconSize(QSize(24, 24));
        toolButton_37->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        lineEdit_10 = new QLineEdit(groupBox_12);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(280, 50, 71, 20));
        label_18 = new QLabel(groupBox_12);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(240, 25, 54, 12));
        toolButton_49 = new QToolButton(groupBox_12);
        toolButton_49->setObjectName(QStringLiteral("toolButton_49"));
        toolButton_49->setGeometry(QRect(360, 20, 32, 50));
        toolButton_49->setMinimumSize(QSize(32, 50));
        toolButton_49->setMaximumSize(QSize(32, 50));
        toolButton_49->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        toolButton_49->setIcon(icon10);
        toolButton_49->setIconSize(QSize(24, 24));
        toolButton_49->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        lineEdit_9 = new QLineEdit(groupBox_12);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(280, 20, 71, 20));
        label_19 = new QLabel(groupBox_12);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(240, 55, 31, 16));
        toolButton_50 = new QToolButton(groupBox_12);
        toolButton_50->setObjectName(QStringLiteral("toolButton_50"));
        toolButton_50->setGeometry(QRect(420, 20, 48, 48));
        toolButton_50->setMinimumSize(QSize(48, 48));
        toolButton_50->setMaximumSize(QSize(48, 48));
        toolButton_50->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/IRScan/Show-All"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_50->setIcon(icon11);
        toolButton_50->setIconSize(QSize(48, 48));
        toolButton_50->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        groupBox_20 = new QGroupBox(pageScan);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(940, 0, 371, 90));
        groupBox_20->setMinimumSize(QSize(0, 90));
        groupBox_20->setMaximumSize(QSize(16777215, 90));
        groupBox_20->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        toolButton_51 = new QToolButton(groupBox_20);
        toolButton_51->setObjectName(QStringLiteral("toolButton_51"));
        toolButton_51->setGeometry(QRect(10, 20, 32, 32));
        toolButton_51->setMinimumSize(QSize(32, 32));
        toolButton_51->setMaximumSize(QSize(32, 32));
        toolButton_51->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/IRScan/Scan-Clock"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_51->setIcon(icon12);
        toolButton_51->setIconSize(QSize(32, 32));
        toolButton_51->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_52 = new QToolButton(groupBox_20);
        toolButton_52->setObjectName(QStringLiteral("toolButton_52"));
        toolButton_52->setGeometry(QRect(50, 20, 32, 32));
        toolButton_52->setMinimumSize(QSize(32, 32));
        toolButton_52->setMaximumSize(QSize(32, 32));
        toolButton_52->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/IRScan/Scan-AntiClock"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_52->setIcon(icon13);
        toolButton_52->setIconSize(QSize(32, 32));
        toolButton_52->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_53 = new QToolButton(groupBox_20);
        toolButton_53->setObjectName(QStringLiteral("toolButton_53"));
        toolButton_53->setGeometry(QRect(90, 20, 32, 32));
        toolButton_53->setMinimumSize(QSize(32, 32));
        toolButton_53->setMaximumSize(QSize(32, 32));
        toolButton_53->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/IRScan/Scan-Up"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_53->setIcon(icon14);
        toolButton_53->setIconSize(QSize(32, 32));
        toolButton_53->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_54 = new QToolButton(groupBox_20);
        toolButton_54->setObjectName(QStringLiteral("toolButton_54"));
        toolButton_54->setGeometry(QRect(130, 20, 32, 32));
        toolButton_54->setMinimumSize(QSize(32, 32));
        toolButton_54->setMaximumSize(QSize(32, 32));
        toolButton_54->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/IRScan/Scan-Down"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_54->setIcon(icon15);
        toolButton_54->setIconSize(QSize(32, 32));
        toolButton_54->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_55 = new QToolButton(groupBox_20);
        toolButton_55->setObjectName(QStringLiteral("toolButton_55"));
        toolButton_55->setGeometry(QRect(170, 20, 32, 32));
        toolButton_55->setMinimumSize(QSize(32, 32));
        toolButton_55->setMaximumSize(QSize(32, 32));
        toolButton_55->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/IRScan/Scan-Focus"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_55->setIcon(icon16);
        toolButton_55->setIconSize(QSize(32, 32));
        toolButton_55->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_56 = new QToolButton(groupBox_20);
        toolButton_56->setObjectName(QStringLiteral("toolButton_56"));
        toolButton_56->setGeometry(QRect(210, 20, 32, 32));
        toolButton_56->setMinimumSize(QSize(32, 32));
        toolButton_56->setMaximumSize(QSize(32, 32));
        toolButton_56->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/IRScan/Scan-Focus2"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_56->setIcon(icon17);
        toolButton_56->setIconSize(QSize(32, 32));
        toolButton_56->setToolButtonStyle(Qt::ToolButtonIconOnly);
        label_20 = new QLabel(groupBox_20);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(35, 60, 31, 16));
        label_21 = new QLabel(groupBox_20);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(115, 60, 31, 16));
        label_22 = new QLabel(groupBox_20);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(195, 60, 31, 16));
        groupBox_19 = new QGroupBox(groupBox_20);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(250, 13, 70, 70));
        groupBox_19->setMinimumSize(QSize(70, 70));
        groupBox_19->setMaximumSize(QSize(70, 70));
        groupBox_19->setStyleSheet(QLatin1String("background-color: rgb(36,84,133);\n"
"border:0px"));
        toolButton_57 = new QToolButton(groupBox_19);
        toolButton_57->setObjectName(QStringLiteral("toolButton_57"));
        toolButton_57->setGeometry(QRect(25, 10, 16, 16));
        toolButton_57->setMinimumSize(QSize(16, 16));
        toolButton_57->setMaximumSize(QSize(16, 16));
        toolButton_57->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/IRScan/Scan-Ups"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_57->setIcon(icon18);
        toolButton_57->setIconSize(QSize(32, 32));
        toolButton_57->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_58 = new QToolButton(groupBox_19);
        toolButton_58->setObjectName(QStringLiteral("toolButton_58"));
        toolButton_58->setGeometry(QRect(25, 45, 16, 16));
        toolButton_58->setMinimumSize(QSize(16, 16));
        toolButton_58->setMaximumSize(QSize(16, 16));
        toolButton_58->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/IRScan/Scan-Downs"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_58->setIcon(icon19);
        toolButton_58->setIconSize(QSize(32, 32));
        toolButton_58->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_59 = new QToolButton(groupBox_19);
        toolButton_59->setObjectName(QStringLiteral("toolButton_59"));
        toolButton_59->setGeometry(QRect(8, 28, 16, 16));
        toolButton_59->setMinimumSize(QSize(16, 16));
        toolButton_59->setMaximumSize(QSize(16, 16));
        toolButton_59->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/IRScan/Scan-Lefts"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_59->setIcon(icon20);
        toolButton_59->setIconSize(QSize(32, 32));
        toolButton_59->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_60 = new QToolButton(groupBox_19);
        toolButton_60->setObjectName(QStringLiteral("toolButton_60"));
        toolButton_60->setGeometry(QRect(43, 28, 16, 16));
        toolButton_60->setMinimumSize(QSize(16, 16));
        toolButton_60->setMaximumSize(QSize(16, 16));
        toolButton_60->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/IRScan/Scan-Rights"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_60->setIcon(icon21);
        toolButton_60->setIconSize(QSize(32, 32));
        toolButton_60->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_61 = new QToolButton(groupBox_20);
        toolButton_61->setObjectName(QStringLiteral("toolButton_61"));
        toolButton_61->setGeometry(QRect(330, 30, 32, 32));
        toolButton_61->setMinimumSize(QSize(32, 32));
        toolButton_61->setMaximumSize(QSize(32, 32));
        toolButton_61->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/IRScan/Scan-On"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_61->setIcon(icon22);
        toolButton_61->setIconSize(QSize(32, 32));
        toolButton_61->setToolButtonStyle(Qt::ToolButtonIconOnly);
        stackedWidget->addWidget(pageScan);
        page_sys = new QWidget();
        page_sys->setObjectName(QStringLiteral("page_sys"));
        groupBox_21 = new QGroupBox(page_sys);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(230, 0, 400, 90));
        groupBox_21->setMinimumSize(QSize(0, 90));
        groupBox_21->setMaximumSize(QSize(16777215, 90));
        groupBox_21->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        checkBox_13 = new QCheckBox(groupBox_21);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        checkBox_13->setGeometry(QRect(30, 20, 85, 16));
        checkBox_13->setMinimumSize(QSize(85, 0));
        checkBox_13->setMaximumSize(QSize(85, 16777215));
        checkBox_14 = new QCheckBox(groupBox_21);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));
        checkBox_14->setGeometry(QRect(120, 20, 85, 16));
        checkBox_14->setMinimumSize(QSize(85, 0));
        checkBox_14->setMaximumSize(QSize(85, 16777215));
        checkBox_15 = new QCheckBox(groupBox_21);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));
        checkBox_15->setGeometry(QRect(220, 20, 85, 16));
        checkBox_15->setMinimumSize(QSize(85, 0));
        checkBox_15->setMaximumSize(QSize(85, 16777215));
        checkBox_16 = new QCheckBox(groupBox_21);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));
        checkBox_16->setGeometry(QRect(310, 20, 85, 16));
        checkBox_16->setMinimumSize(QSize(85, 0));
        checkBox_16->setMaximumSize(QSize(85, 16777215));
        checkBox_17 = new QCheckBox(groupBox_21);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));
        checkBox_17->setGeometry(QRect(30, 50, 85, 16));
        checkBox_17->setMinimumSize(QSize(85, 0));
        checkBox_17->setMaximumSize(QSize(85, 16777215));
        checkBox_18 = new QCheckBox(groupBox_21);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));
        checkBox_18->setGeometry(QRect(120, 50, 85, 16));
        checkBox_18->setMinimumSize(QSize(85, 0));
        checkBox_18->setMaximumSize(QSize(85, 16777215));
        checkBox_19 = new QCheckBox(groupBox_21);
        checkBox_19->setObjectName(QStringLiteral("checkBox_19"));
        checkBox_19->setGeometry(QRect(220, 50, 85, 16));
        checkBox_19->setMinimumSize(QSize(85, 0));
        checkBox_19->setMaximumSize(QSize(85, 16777215));
        groupBox_22 = new QGroupBox(page_sys);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(10, 0, 205, 90));
        groupBox_22->setMinimumSize(QSize(0, 90));
        groupBox_22->setMaximumSize(QSize(16777215, 90));
        groupBox_22->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        userAreaBt_2 = new QToolButton(groupBox_22);
        userAreaBt_2->setObjectName(QStringLiteral("userAreaBt_2"));
        userAreaBt_2->setGeometry(QRect(30, 20, 32, 32));
        userAreaBt_2->setMinimumSize(QSize(32, 32));
        userAreaBt_2->setMaximumSize(QSize(32, 32));
        userAreaBt_2->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/IRScan/Sys-UserMax"), QSize(), QIcon::Normal, QIcon::Off);
        userAreaBt_2->setIcon(icon23);
        userAreaBt_2->setToolButtonStyle(Qt::ToolButtonIconOnly);
        label_23 = new QLabel(groupBox_22);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 60, 75, 20));
        label_23->setMinimumSize(QSize(75, 20));
        label_23->setMaximumSize(QSize(75, 20));
        toolBarExpandBt_2 = new QToolButton(groupBox_22);
        toolBarExpandBt_2->setObjectName(QStringLiteral("toolBarExpandBt_2"));
        toolBarExpandBt_2->setGeometry(QRect(130, 20, 32, 32));
        toolBarExpandBt_2->setMinimumSize(QSize(32, 32));
        toolBarExpandBt_2->setMaximumSize(QSize(32, 32));
        toolBarExpandBt_2->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/IRScan/Sys-ExtTool"), QSize(), QIcon::Normal, QIcon::Off);
        toolBarExpandBt_2->setIcon(icon24);
        label_24 = new QLabel(groupBox_22);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(110, 60, 85, 20));
        label_24->setMinimumSize(QSize(85, 20));
        label_24->setMaximumSize(QSize(85, 20));
        groupBox_23 = new QGroupBox(page_sys);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setGeometry(QRect(640, 0, 300, 90));
        groupBox_23->setStyleSheet(QStringLiteral("background-color: rgb(18, 59, 101);"));
        sysSettingBt_2 = new QToolButton(groupBox_23);
        sysSettingBt_2->setObjectName(QStringLiteral("sysSettingBt_2"));
        sysSettingBt_2->setGeometry(QRect(30, 20, 32, 32));
        sysSettingBt_2->setMinimumSize(QSize(32, 32));
        sysSettingBt_2->setMaximumSize(QSize(32, 32));
        sysSettingBt_2->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/IRScan/Sys-RightSet"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_2->setIcon(icon25);
        label_25 = new QLabel(groupBox_23);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 60, 50, 20));
        label_25->setMinimumSize(QSize(50, 20));
        label_25->setMaximumSize(QSize(50, 20));
        label_26 = new QLabel(groupBox_23);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(90, 60, 50, 20));
        label_26->setMinimumSize(QSize(50, 20));
        label_26->setMaximumSize(QSize(50, 20));
        sysSettingBt_3 = new QToolButton(groupBox_23);
        sysSettingBt_3->setObjectName(QStringLiteral("sysSettingBt_3"));
        sysSettingBt_3->setGeometry(QRect(100, 20, 32, 32));
        sysSettingBt_3->setMinimumSize(QSize(32, 32));
        sysSettingBt_3->setMaximumSize(QSize(32, 32));
        sysSettingBt_3->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/IRScan/Sys-Para"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_3->setIcon(icon26);
        label_27 = new QLabel(groupBox_23);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(160, 60, 50, 20));
        label_27->setMinimumSize(QSize(50, 20));
        label_27->setMaximumSize(QSize(50, 20));
        sysSettingBt_4 = new QToolButton(groupBox_23);
        sysSettingBt_4->setObjectName(QStringLiteral("sysSettingBt_4"));
        sysSettingBt_4->setGeometry(QRect(170, 20, 32, 32));
        sysSettingBt_4->setMinimumSize(QSize(32, 32));
        sysSettingBt_4->setMaximumSize(QSize(32, 32));
        sysSettingBt_4->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/IRScan/Sys-Hos"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_4->setIcon(icon27);
        label_28 = new QLabel(groupBox_23);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(225, 60, 60, 20));
        label_28->setMinimumSize(QSize(60, 20));
        label_28->setMaximumSize(QSize(60, 20));
        sysSettingBt_5 = new QToolButton(groupBox_23);
        sysSettingBt_5->setObjectName(QStringLiteral("sysSettingBt_5"));
        sysSettingBt_5->setGeometry(QRect(240, 20, 32, 32));
        sysSettingBt_5->setMinimumSize(QSize(32, 32));
        sysSettingBt_5->setMaximumSize(QSize(32, 32));
        sysSettingBt_5->setStyleSheet(QLatin1String("background-color: rgb(21, 86, 141);\n"
"border:0px solid;"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/IRScan/Sys-Cor"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_5->setIcon(icon28);
        stackedWidget->addWidget(page_sys);

        verticalLayout->addWidget(stackedWidget);

        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(22, 84, 141));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(200, 0));
        tableWidget->setMaximumSize(QSize(200, 16777215));
        tableWidget->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setAutoScrollMargin(15);
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setDragDropOverwriteMode(true);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setRowCount(5);
        tableWidget->setColumnCount(11);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        widget = new QWidget(page_3);
        widget->setObjectName(QStringLiteral("widget"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 0, 480, 640));
        label_2->setMinimumSize(QSize(480, 640));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        widget_2 = new QWidget(page_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(widget_2, 0, 2, 1, 1);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget_2->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget_2);

        IRScanClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IRScanClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1495, 23));
        IRScanClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(IRScanClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IRScanClass->setStatusBar(statusBar);
        toolBar = new QToolBar(IRScanClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea);
        toolBar->setIconSize(QSize(64, 64));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        IRScanClass->addToolBar(Qt::LeftToolBarArea, toolBar);

        toolBar->addAction(imgScanAct);
        toolBar->addAction(imgSysAct);

        retranslateUi(IRScanClass);

        QMetaObject::connectSlotsByName(IRScanClass);
    } // setupUi

    void retranslateUi(QMainWindow *IRScanClass)
    {
        IRScanClass->setWindowTitle(QApplication::translate("IRScanClass", "IRScan", 0));
        imgScanAct->setText(QApplication::translate("IRScanClass", "\345\233\276\345\203\217\346\211\253\346\217\217", 0));
#ifndef QT_NO_TOOLTIP
        imgScanAct->setToolTip(QApplication::translate("IRScanClass", "\345\233\276\345\203\217\346\211\253\346\217\217", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        imgScanAct->setStatusTip(QApplication::translate("IRScanClass", "\345\233\276\345\203\217\346\211\253\346\217\217", 0));
#endif // QT_NO_STATUSTIP
        imgSysAct->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\351\200\211\351\241\271", 0));
#ifndef QT_NO_TOOLTIP
        imgSysAct->setToolTip(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\351\200\211\351\241\271", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        imgSysAct->setStatusTip(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\351\200\211\351\241\271", 0));
#endif // QT_NO_STATUSTIP
        groupBox_10->setTitle(QApplication::translate("IRScanClass", "\346\223\215\344\275\234", 0));
        toolButton_27->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217", 0));
        toolButton_31->setText(QApplication::translate("IRScanClass", "\345\210\240\351\231\244", 0));
        toolButton_30->setText(QApplication::translate("IRScanClass", "\347\231\273\350\256\260", 0));
        toolButton_32->setText(QApplication::translate("IRScanClass", "\344\277\256\346\224\271", 0));
        groupBox_11->setTitle(QApplication::translate("IRScanClass", "\346\214\211\351\241\265\347\240\201\346\237\245\346\211\276", 0));
        toolButton_33->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_34->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_35->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_36->setText(QApplication::translate("IRScanClass", "...", 0));
        groupBox_12->setTitle(QApplication::translate("IRScanClass", "\346\214\211\346\227\245\346\234\237\350\214\203\345\233\264\347\255\233\351\200\211", 0));
        label->setText(QApplication::translate("IRScanClass", "\350\265\267\345\247\213\357\274\232", 0));
        label_3->setText(QApplication::translate("IRScanClass", "\347\273\223\346\235\237\357\274\232", 0));
        toolButton_37->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_18->setText(QApplication::translate("IRScanClass", "\345\247\223\345\220\215\357\274\232", 0));
        toolButton_49->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_19->setText(QApplication::translate("IRScanClass", "\347\274\226\345\217\267\357\274\232", 0));
        toolButton_50->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        groupBox_20->setTitle(QApplication::translate("IRScanClass", "\346\211\253\346\217\217\345\217\260\346\216\247\345\210\266", 0));
        toolButton_51->setText(QApplication::translate("IRScanClass", "\351\241\272\346\227\266\351\222\210", 0));
        toolButton_52->setText(QApplication::translate("IRScanClass", "\351\200\206\346\227\266\351\222\210", 0));
        toolButton_53->setText(QApplication::translate("IRScanClass", "\344\270\212\345\215\207", 0));
        toolButton_54->setText(QApplication::translate("IRScanClass", "\344\270\213\351\231\215", 0));
        toolButton_55->setText(QApplication::translate("IRScanClass", "\350\277\234", 0));
        toolButton_56->setText(QApplication::translate("IRScanClass", "\350\277\221", 0));
        label_20->setText(QApplication::translate("IRScanClass", "\346\227\213\350\275\254", 0));
        label_21->setText(QApplication::translate("IRScanClass", "\351\253\230\345\272\246", 0));
        label_22->setText(QApplication::translate("IRScanClass", "\350\201\232\347\204\246", 0));
        groupBox_19->setTitle(QString());
        toolButton_57->setText(QApplication::translate("IRScanClass", "\344\270\212", 0));
        toolButton_58->setText(QApplication::translate("IRScanClass", "\344\270\213", 0));
        toolButton_59->setText(QApplication::translate("IRScanClass", "\345\267\246", 0));
        toolButton_60->setText(QApplication::translate("IRScanClass", "\345\217\263", 0));
        toolButton_61->setText(QApplication::translate("IRScanClass", "\351\241\272\346\227\266\351\222\210", 0));
        groupBox_21->setTitle(QApplication::translate("IRScanClass", "\345\256\232\345\210\266", 0));
        checkBox_13->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\347\212\266\346\200\201\346\240\217", 0));
        checkBox_14->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\346\225\260\346\215\256\345\214\272", 0));
        checkBox_15->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\345\212\237\350\203\275\345\214\272", 0));
        checkBox_16->setText(QApplication::translate("IRScanClass", "\345\256\236\346\227\266\347\203\255\350\276\220\345\260\204", 0));
        checkBox_17->setText(QApplication::translate("IRScanClass", "\351\232\220\350\227\217\351\200\211\346\213\251\351\241\265", 0));
        checkBox_18->setText(QApplication::translate("IRScanClass", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        checkBox_19->setText(QApplication::translate("IRScanClass", "\351\273\221\350\211\262\350\203\214\346\231\257", 0));
        groupBox_22->setTitle(QApplication::translate("IRScanClass", "\345\270\203\345\261\200", 0));
#ifndef QT_NO_TOOLTIP
        userAreaBt_2->setToolTip(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        userAreaBt_2->setText(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
        label_23->setText(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
        toolBarExpandBt_2->setText(QApplication::translate("IRScanClass", "\345\261\225\345\274\200\346\211\200\346\234\211\345\267\245\345\205\267\346\240\217", 0));
        label_24->setText(QApplication::translate("IRScanClass", "\345\261\225\345\274\200\346\211\200\346\234\211\345\267\245\345\205\267\346\240\217", 0));
        groupBox_23->setTitle(QApplication::translate("IRScanClass", "\350\256\276\347\275\256", 0));
        sysSettingBt_2->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_25->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_26->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        sysSettingBt_3->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        label_27->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        sysSettingBt_4->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        label_28->setText(QApplication::translate("IRScanClass", "\344\270\215\345\235\207\345\214\200\346\240\241\346\255\243", 0));
        sysSettingBt_5->setText(QApplication::translate("IRScanClass", "\344\270\215\345\235\207\345\214\200\346\240\241\346\255\243", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("IRScanClass", "\345\272\217\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("IRScanClass", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("IRScanClass", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("IRScanClass", "\346\200\247\345\210\253", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("IRScanClass", "\347\224\237\346\227\245", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("IRScanClass", "\345\271\264\351\276\204", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("IRScanClass", "\347\231\273\350\256\260\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("IRScanClass", "\345\257\274\345\205\245\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("IRScanClass", "\345\214\273\351\231\242\345\220\215\347\247\260", 0));
        label_2->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("IRScanClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class IRScanClass: public Ui_IRScanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRSCAN_H
