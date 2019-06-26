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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
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
    QToolButton *btn_scan;
    QToolButton *toolButton_31;
    QToolButton *toolButton_30;
    QToolButton *toolButton_32;
    QLabel *label_35;
    QGroupBox *groupBox_20;
    QToolButton *btn_clock;
    QToolButton *btn_anticlock;
    QToolButton *btn_cam_up;
    QToolButton *btn_cam_down;
    QToolButton *btn_focus_far;
    QToolButton *btn_focus_near;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QGroupBox *groupBox_19;
    QToolButton *btn_cam_ups;
    QToolButton *btn_cam_downs;
    QToolButton *btn_cam_left;
    QToolButton *btn_cam_right;
    QToolButton *toolButton_61;
    QLabel *label_33;
    QLabel *label_34;
    QGroupBox *groupBox_11;
    QLineEdit *lineEdit;
    QToolButton *toolButton_33;
    QToolButton *toolButton_34;
    QToolButton *toolButton_35;
    QToolButton *toolButton_36;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_29;
    QLabel *label_30;
    QGroupBox *groupBox_13;
    QDateEdit *dateEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateEdit_4;
    QToolButton *toolButton_38;
    QLabel *label_31;
    QLabel *label_32;
    QToolButton *toolButton_49;
    QLabel *label_19;
    QToolButton *toolButton_50;
    QLineEdit *lineEdit_9;
    QLabel *label_18;
    QLineEdit *lineEdit_10;
    QWidget *page_sys;
    QGroupBox *groupBox_21;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_19;
    QLabel *label_40;
    QGroupBox *groupBox_22;
    QToolButton *userAreaBt_2;
    QLabel *label_23;
    QToolButton *toolBarExpandBt_2;
    QLabel *label_24;
    QLabel *label_39;
    QGroupBox *groupBox_23;
    QToolButton *sysSettingBt_2;
    QLabel *label_25;
    QLabel *label_26;
    QToolButton *btn_sys_par;
    QLabel *label_27;
    QToolButton *sysSettingBt_4;
    QLabel *label_28;
    QToolButton *sysSettingBt_5;
    QLabel *label_41;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *scanPicShow;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
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
        IRScanClass->resize(1495, 878);
        QIcon icon;
        icon.addFile(QStringLiteral(":/IRScan/Scan-Sel"), QSize(), QIcon::Normal, QIcon::Off);
        IRScanClass->setWindowIcon(icon);
        IRScanClass->setStyleSheet(QLatin1String("background-color: rgb(15, 21, 42);\n"
"color: rgb(255, 255, 255);"));
        imgScanAct = new QAction(IRScanClass);
        imgScanAct->setObjectName(QStringLiteral("imgScanAct"));
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
        pageScan->setStyleSheet(QLatin1String("QGroupBox{background-color: rgb(15, 21, 42);\n"
"border:0px;\n"
"}\n"
"QToolButton{\n"
"background-color: rgb(18, 59, 101);\n"
"border:0px;\n"
"}\n"
"QLabel{\n"
"background-color: rgb(19, 65, 115);\n"
"border:0px;\n"
"}\n"
"QLineEdit{\n"
"border-image: url(:/IRScan/BorderBg);\n"
"background-color: rgb(12,40,70);\n"
"}\n"
"QCheckBox{\n"
"background-color: rgb(18, 59, 101);\n"
"}"));
        groupBox_10 = new QGroupBox(pageScan);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 0, 225, 90));
        groupBox_10->setMinimumSize(QSize(0, 90));
        groupBox_10->setMaximumSize(QSize(16777215, 90));
        groupBox_10->setStyleSheet(QLatin1String("QGroupBox{\n"
"background-image: url(:/IRScan/Bg1);\n"
"}"));
        btn_scan = new QToolButton(groupBox_10);
        btn_scan->setObjectName(QStringLiteral("btn_scan"));
        btn_scan->setGeometry(QRect(105, 20, 32, 50));
        btn_scan->setMinimumSize(QSize(32, 50));
        btn_scan->setMaximumSize(QSize(32, 50));
        btn_scan->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/IRScan/Scan-Scan"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scan->setIcon(icon2);
        btn_scan->setIconSize(QSize(20, 20));
        btn_scan->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_31 = new QToolButton(groupBox_10);
        toolButton_31->setObjectName(QStringLiteral("toolButton_31"));
        toolButton_31->setGeometry(QRect(145, 20, 32, 50));
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
        toolButton_30->setGeometry(QRect(65, 20, 32, 50));
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
        toolButton_32->setGeometry(QRect(185, 20, 32, 50));
        toolButton_32->setMinimumSize(QSize(32, 50));
        toolButton_32->setMaximumSize(QSize(32, 50));
        toolButton_32->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/IRScan/Scan-Change"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_32->setIcon(icon5);
        toolButton_32->setIconSize(QSize(20, 20));
        toolButton_32->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_35 = new QLabel(groupBox_10);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(30, 20, 16, 50));
        label_35->setStyleSheet(QStringLiteral(""));
        groupBox_20 = new QGroupBox(pageScan);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(920, 0, 450, 90));
        groupBox_20->setMinimumSize(QSize(0, 90));
        groupBox_20->setMaximumSize(QSize(16777215, 90));
        groupBox_20->setStyleSheet(QLatin1String("QGroupBox{\n"
"\n"
"	background-image: url(:/IRScan/Bg3);\n"
"\n"
"}"));
        btn_clock = new QToolButton(groupBox_20);
        btn_clock->setObjectName(QStringLiteral("btn_clock"));
        btn_clock->setGeometry(QRect(85, 20, 32, 32));
        btn_clock->setMinimumSize(QSize(32, 32));
        btn_clock->setMaximumSize(QSize(32, 32));
        btn_clock->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/IRScan/Scan-Clock"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clock->setIcon(icon6);
        btn_clock->setIconSize(QSize(32, 32));
        btn_clock->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_anticlock = new QToolButton(groupBox_20);
        btn_anticlock->setObjectName(QStringLiteral("btn_anticlock"));
        btn_anticlock->setGeometry(QRect(125, 20, 32, 32));
        btn_anticlock->setMinimumSize(QSize(32, 32));
        btn_anticlock->setMaximumSize(QSize(32, 32));
        btn_anticlock->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/IRScan/Scan-AntiClock"), QSize(), QIcon::Normal, QIcon::Off);
        btn_anticlock->setIcon(icon7);
        btn_anticlock->setIconSize(QSize(32, 32));
        btn_anticlock->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_cam_up = new QToolButton(groupBox_20);
        btn_cam_up->setObjectName(QStringLiteral("btn_cam_up"));
        btn_cam_up->setGeometry(QRect(165, 20, 32, 32));
        btn_cam_up->setMinimumSize(QSize(32, 32));
        btn_cam_up->setMaximumSize(QSize(32, 32));
        btn_cam_up->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/IRScan/Scan-Up"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_up->setIcon(icon8);
        btn_cam_up->setIconSize(QSize(32, 32));
        btn_cam_up->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_cam_down = new QToolButton(groupBox_20);
        btn_cam_down->setObjectName(QStringLiteral("btn_cam_down"));
        btn_cam_down->setGeometry(QRect(205, 20, 32, 32));
        btn_cam_down->setMinimumSize(QSize(32, 32));
        btn_cam_down->setMaximumSize(QSize(32, 32));
        btn_cam_down->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/IRScan/Scan-Down"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_down->setIcon(icon9);
        btn_cam_down->setIconSize(QSize(32, 32));
        btn_cam_down->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_focus_far = new QToolButton(groupBox_20);
        btn_focus_far->setObjectName(QStringLiteral("btn_focus_far"));
        btn_focus_far->setGeometry(QRect(245, 20, 32, 32));
        btn_focus_far->setMinimumSize(QSize(32, 32));
        btn_focus_far->setMaximumSize(QSize(32, 32));
        btn_focus_far->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/IRScan/Scan-Focus"), QSize(), QIcon::Normal, QIcon::Off);
        btn_focus_far->setIcon(icon10);
        btn_focus_far->setIconSize(QSize(32, 32));
        btn_focus_far->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_focus_near = new QToolButton(groupBox_20);
        btn_focus_near->setObjectName(QStringLiteral("btn_focus_near"));
        btn_focus_near->setGeometry(QRect(285, 20, 32, 32));
        btn_focus_near->setMinimumSize(QSize(32, 32));
        btn_focus_near->setMaximumSize(QSize(32, 32));
        btn_focus_near->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/IRScan/Scan-Focus2"), QSize(), QIcon::Normal, QIcon::Off);
        btn_focus_near->setIcon(icon11);
        btn_focus_near->setIconSize(QSize(32, 32));
        btn_focus_near->setToolButtonStyle(Qt::ToolButtonIconOnly);
        label_20 = new QLabel(groupBox_20);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(110, 60, 31, 16));
        label_21 = new QLabel(groupBox_20);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(190, 60, 31, 16));
        label_22 = new QLabel(groupBox_20);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(270, 60, 31, 16));
        groupBox_19 = new QGroupBox(groupBox_20);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(330, 13, 70, 70));
        groupBox_19->setMinimumSize(QSize(70, 70));
        groupBox_19->setMaximumSize(QSize(70, 70));
        groupBox_19->setStyleSheet(QLatin1String("background-color: rgb(36,84,133);\n"
"background-image: url();\n"
""));
        btn_cam_ups = new QToolButton(groupBox_19);
        btn_cam_ups->setObjectName(QStringLiteral("btn_cam_ups"));
        btn_cam_ups->setGeometry(QRect(25, 10, 16, 16));
        btn_cam_ups->setMinimumSize(QSize(16, 16));
        btn_cam_ups->setMaximumSize(QSize(16, 16));
        btn_cam_ups->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/IRScan/Scan-Ups"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_ups->setIcon(icon12);
        btn_cam_ups->setIconSize(QSize(32, 32));
        btn_cam_ups->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_cam_downs = new QToolButton(groupBox_19);
        btn_cam_downs->setObjectName(QStringLiteral("btn_cam_downs"));
        btn_cam_downs->setGeometry(QRect(25, 45, 16, 16));
        btn_cam_downs->setMinimumSize(QSize(16, 16));
        btn_cam_downs->setMaximumSize(QSize(16, 16));
        btn_cam_downs->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/IRScan/Scan-Downs"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_downs->setIcon(icon13);
        btn_cam_downs->setIconSize(QSize(32, 32));
        btn_cam_downs->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_cam_left = new QToolButton(groupBox_19);
        btn_cam_left->setObjectName(QStringLiteral("btn_cam_left"));
        btn_cam_left->setGeometry(QRect(8, 28, 16, 16));
        btn_cam_left->setMinimumSize(QSize(16, 16));
        btn_cam_left->setMaximumSize(QSize(16, 16));
        btn_cam_left->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/IRScan/Scan-Lefts"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_left->setIcon(icon14);
        btn_cam_left->setIconSize(QSize(32, 32));
        btn_cam_left->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_cam_right = new QToolButton(groupBox_19);
        btn_cam_right->setObjectName(QStringLiteral("btn_cam_right"));
        btn_cam_right->setGeometry(QRect(43, 28, 16, 16));
        btn_cam_right->setMinimumSize(QSize(16, 16));
        btn_cam_right->setMaximumSize(QSize(16, 16));
        btn_cam_right->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/IRScan/Scan-Rights"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_right->setIcon(icon15);
        btn_cam_right->setIconSize(QSize(32, 32));
        btn_cam_right->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_61 = new QToolButton(groupBox_20);
        toolButton_61->setObjectName(QStringLiteral("toolButton_61"));
        toolButton_61->setGeometry(QRect(410, 30, 32, 32));
        toolButton_61->setMinimumSize(QSize(32, 32));
        toolButton_61->setMaximumSize(QSize(32, 32));
        toolButton_61->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/IRScan/Scan-On"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_61->setIcon(icon16);
        toolButton_61->setIconSize(QSize(32, 32));
        toolButton_61->setToolButtonStyle(Qt::ToolButtonIconOnly);
        label_33 = new QLabel(groupBox_20);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(25, 20, 16, 60));
        label_33->setStyleSheet(QStringLiteral(""));
        label_34 = new QLabel(groupBox_20);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(45, 20, 16, 60));
        label_34->setStyleSheet(QStringLiteral(""));
        groupBox_11 = new QGroupBox(pageScan);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(230, 0, 185, 90));
        groupBox_11->setMinimumSize(QSize(0, 90));
        groupBox_11->setMaximumSize(QSize(16777215, 90));
        groupBox_11->setStyleSheet(QLatin1String("QGroupBox{\n"
"	background-image: url(:/IRScan/Bg2);\n"
"}\n"
"QToolButton{\n"
"	border-image: url(:/IRScan/BorderBg);\n"
"}"));
        lineEdit = new QLineEdit(groupBox_11);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(115, 30, 30, 15));
        lineEdit->setMinimumSize(QSize(0, 15));
        lineEdit->setMaximumSize(QSize(16777215, 16));
        lineEdit->setStyleSheet(QStringLiteral(""));
        toolButton_33 = new QToolButton(groupBox_11);
        toolButton_33->setObjectName(QStringLiteral("toolButton_33"));
        toolButton_33->setGeometry(QRect(100, 30, 15, 15));
        toolButton_33->setMinimumSize(QSize(15, 15));
        toolButton_33->setMaximumSize(QSize(15, 15));
        toolButton_33->setStyleSheet(QStringLiteral(""));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/IRScan/Scan-Left"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_33->setIcon(icon17);
        toolButton_34 = new QToolButton(groupBox_11);
        toolButton_34->setObjectName(QStringLiteral("toolButton_34"));
        toolButton_34->setGeometry(QRect(85, 30, 15, 15));
        toolButton_34->setMinimumSize(QSize(15, 15));
        toolButton_34->setMaximumSize(QSize(15, 15));
        toolButton_34->setStyleSheet(QStringLiteral(""));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/IRScan/Scan-DLeft"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_34->setIcon(icon18);
        toolButton_35 = new QToolButton(groupBox_11);
        toolButton_35->setObjectName(QStringLiteral("toolButton_35"));
        toolButton_35->setGeometry(QRect(145, 30, 15, 15));
        toolButton_35->setMinimumSize(QSize(15, 15));
        toolButton_35->setMaximumSize(QSize(15, 15));
        toolButton_35->setStyleSheet(QStringLiteral(""));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/IRScan/Scan-Right"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_35->setIcon(icon19);
        toolButton_36 = new QToolButton(groupBox_11);
        toolButton_36->setObjectName(QStringLiteral("toolButton_36"));
        toolButton_36->setGeometry(QRect(160, 30, 15, 15));
        toolButton_36->setMinimumSize(QSize(15, 15));
        toolButton_36->setMaximumSize(QSize(15, 15));
        toolButton_36->setStyleSheet(QStringLiteral(""));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/IRScan/Scan-DightR"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_36->setIcon(icon20);
        lineEdit_2 = new QLineEdit(groupBox_11);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 60, 40, 15));
        lineEdit_2->setStyleSheet(QStringLiteral(""));
        lineEdit_3 = new QLineEdit(groupBox_11);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 60, 40, 15));
        lineEdit_3->setStyleSheet(QStringLiteral(""));
        label_29 = new QLabel(groupBox_11);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 20, 16, 55));
        label_29->setStyleSheet(QStringLiteral(""));
        label_30 = new QLabel(groupBox_11);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(50, 25, 16, 41));
        label_30->setStyleSheet(QStringLiteral(""));
        groupBox_13 = new QGroupBox(pageScan);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(420, 0, 500, 90));
        groupBox_13->setMinimumSize(QSize(0, 90));
        groupBox_13->setMaximumSize(QSize(16777215, 90));
        groupBox_13->setStyleSheet(QLatin1String("QGroupBox{\n"
"\n"
"	background-image: url(:/IRScan/Bg3);\n"
"\n"
"}"));
        dateEdit_3 = new QDateEdit(groupBox_13);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(130, 20, 110, 22));
        dateEdit_3->setStyleSheet(QLatin1String("background-image: url();\n"
"background-color: rgb(12,40,70);\n"
"border-image: url(:/IRProc/Pro-Rect1);"));
        label_4 = new QLabel(groupBox_13);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 22, 40, 20));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_13);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 52, 40, 20));
        label_5->setStyleSheet(QStringLiteral(""));
        dateEdit_4 = new QDateEdit(groupBox_13);
        dateEdit_4->setObjectName(QStringLiteral("dateEdit_4"));
        dateEdit_4->setGeometry(QRect(130, 50, 110, 22));
        dateEdit_4->setStyleSheet(QLatin1String("background-image: url();\n"
"background-color: rgb(12,40,70);\n"
"border-image: url(:/IRProc/Pro-Rect1);"));
        toolButton_38 = new QToolButton(groupBox_13);
        toolButton_38->setObjectName(QStringLiteral("toolButton_38"));
        toolButton_38->setGeometry(QRect(250, 20, 32, 50));
        toolButton_38->setMinimumSize(QSize(32, 50));
        toolButton_38->setMaximumSize(QSize(50, 166667));
        toolButton_38->setStyleSheet(QStringLiteral(""));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/IRScan/Scan-Filter"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_38->setIcon(icon21);
        toolButton_38->setIconSize(QSize(24, 24));
        toolButton_38->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_31 = new QLabel(groupBox_13);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(25, 15, 16, 60));
        label_31->setStyleSheet(QStringLiteral(""));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(45, 5, 16, 80));
        label_32->setStyleSheet(QStringLiteral(""));
        toolButton_49 = new QToolButton(groupBox_13);
        toolButton_49->setObjectName(QStringLiteral("toolButton_49"));
        toolButton_49->setGeometry(QRect(400, 20, 32, 50));
        toolButton_49->setMinimumSize(QSize(32, 50));
        toolButton_49->setMaximumSize(QSize(32, 50));
        toolButton_49->setStyleSheet(QLatin1String("background-color: rgb(18, 59, 101);\n"
"border:0px solid;"));
        toolButton_49->setIcon(icon21);
        toolButton_49->setIconSize(QSize(24, 24));
        toolButton_49->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_19 = new QLabel(groupBox_13);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(285, 55, 35, 16));
        toolButton_50 = new QToolButton(groupBox_13);
        toolButton_50->setObjectName(QStringLiteral("toolButton_50"));
        toolButton_50->setGeometry(QRect(440, 20, 50, 50));
        toolButton_50->setMinimumSize(QSize(50, 50));
        toolButton_50->setMaximumSize(QSize(48, 48));
        toolButton_50->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 59, 101);\n"
"font: 8pt \"\345\256\213\344\275\223\";\n"
"border:0px solid;"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/IRScan/Show-All"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_50->setIcon(icon22);
        toolButton_50->setIconSize(QSize(48, 48));
        toolButton_50->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        lineEdit_9 = new QLineEdit(groupBox_13);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(325, 20, 71, 20));
        label_18 = new QLabel(groupBox_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(285, 25, 35, 15));
        lineEdit_10 = new QLineEdit(groupBox_13);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(325, 50, 71, 20));
        stackedWidget->addWidget(pageScan);
        page_sys = new QWidget();
        page_sys->setObjectName(QStringLiteral("page_sys"));
        page_sys->setStyleSheet(QLatin1String("QGroupBox{\n"
"background-image: url(:/IRScan/Bg1);\n"
"background-color: rgb(15, 21, 42);\n"
"border:0px;\n"
"}\n"
"QToolButton{\n"
"background-color: rgb(18, 59, 101);\n"
"border:0px;\n"
"}\n"
"QLabel{\n"
"background-color: rgb(19, 65, 115);\n"
"border:0px;\n"
"}\n"
"QCheckBox{\n"
"background-color: rgb(18, 59, 101);\n"
"border:0px;\n"
"}"));
        groupBox_21 = new QGroupBox(page_sys);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(280, 0, 400, 90));
        groupBox_21->setMinimumSize(QSize(0, 90));
        groupBox_21->setMaximumSize(QSize(16777215, 90));
        groupBox_21->setStyleSheet(QStringLiteral(""));
        checkBox_13 = new QCheckBox(groupBox_21);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        checkBox_13->setGeometry(QRect(80, 25, 100, 16));
        checkBox_13->setMinimumSize(QSize(100, 0));
        checkBox_13->setMaximumSize(QSize(85, 16777215));
        checkBox_15 = new QCheckBox(groupBox_21);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));
        checkBox_15->setGeometry(QRect(190, 25, 100, 16));
        checkBox_15->setMinimumSize(QSize(100, 0));
        checkBox_15->setMaximumSize(QSize(85, 16777215));
        checkBox_17 = new QCheckBox(groupBox_21);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));
        checkBox_17->setGeometry(QRect(80, 55, 100, 16));
        checkBox_17->setMinimumSize(QSize(100, 0));
        checkBox_17->setMaximumSize(QSize(85, 16777215));
        checkBox_18 = new QCheckBox(groupBox_21);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));
        checkBox_18->setGeometry(QRect(190, 55, 85, 16));
        checkBox_18->setMinimumSize(QSize(85, 0));
        checkBox_18->setMaximumSize(QSize(85, 16777215));
        checkBox_19 = new QCheckBox(groupBox_21);
        checkBox_19->setObjectName(QStringLiteral("checkBox_19"));
        checkBox_19->setGeometry(QRect(300, 25, 85, 16));
        checkBox_19->setMinimumSize(QSize(85, 0));
        checkBox_19->setMaximumSize(QSize(85, 16777215));
        label_40 = new QLabel(groupBox_21);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(25, 20, 20, 55));
        groupBox_22 = new QGroupBox(page_sys);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(0, 0, 280, 90));
        groupBox_22->setMinimumSize(QSize(0, 90));
        groupBox_22->setMaximumSize(QSize(16777215, 90));
        groupBox_22->setStyleSheet(QStringLiteral(""));
        userAreaBt_2 = new QToolButton(groupBox_22);
        userAreaBt_2->setObjectName(QStringLiteral("userAreaBt_2"));
        userAreaBt_2->setGeometry(QRect(90, 20, 32, 32));
        userAreaBt_2->setMinimumSize(QSize(32, 32));
        userAreaBt_2->setMaximumSize(QSize(32, 32));
        userAreaBt_2->setStyleSheet(QStringLiteral(""));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/IRScan/Sys-UserMax"), QSize(), QIcon::Normal, QIcon::Off);
        userAreaBt_2->setIcon(icon23);
        userAreaBt_2->setToolButtonStyle(Qt::ToolButtonIconOnly);
        label_23 = new QLabel(groupBox_22);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(65, 60, 95, 20));
        label_23->setMinimumSize(QSize(95, 20));
        label_23->setMaximumSize(QSize(95, 20));
        toolBarExpandBt_2 = new QToolButton(groupBox_22);
        toolBarExpandBt_2->setObjectName(QStringLiteral("toolBarExpandBt_2"));
        toolBarExpandBt_2->setGeometry(QRect(200, 20, 32, 32));
        toolBarExpandBt_2->setMinimumSize(QSize(32, 32));
        toolBarExpandBt_2->setMaximumSize(QSize(32, 32));
        toolBarExpandBt_2->setStyleSheet(QStringLiteral(""));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/IRScan/Sys-ExtTool"), QSize(), QIcon::Normal, QIcon::Off);
        toolBarExpandBt_2->setIcon(icon24);
        label_24 = new QLabel(groupBox_22);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(170, 60, 110, 20));
        label_24->setMinimumSize(QSize(110, 20));
        label_24->setMaximumSize(QSize(85, 20));
        label_39 = new QLabel(groupBox_22);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(30, 20, 20, 55));
        groupBox_23 = new QGroupBox(page_sys);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setGeometry(QRect(680, 0, 400, 90));
        groupBox_23->setStyleSheet(QStringLiteral(""));
        sysSettingBt_2 = new QToolButton(groupBox_23);
        sysSettingBt_2->setObjectName(QStringLiteral("sysSettingBt_2"));
        sysSettingBt_2->setGeometry(QRect(80, 20, 32, 32));
        sysSettingBt_2->setMinimumSize(QSize(32, 32));
        sysSettingBt_2->setMaximumSize(QSize(32, 32));
        sysSettingBt_2->setStyleSheet(QStringLiteral(""));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/IRScan/Sys-RightSet"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_2->setIcon(icon25);
        label_25 = new QLabel(groupBox_23);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(70, 60, 60, 20));
        label_25->setMinimumSize(QSize(60, 20));
        label_25->setMaximumSize(QSize(50, 20));
        label_26 = new QLabel(groupBox_23);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(150, 60, 60, 20));
        label_26->setMinimumSize(QSize(60, 20));
        label_26->setMaximumSize(QSize(50, 20));
        btn_sys_par = new QToolButton(groupBox_23);
        btn_sys_par->setObjectName(QStringLiteral("btn_sys_par"));
        btn_sys_par->setGeometry(QRect(160, 20, 32, 32));
        btn_sys_par->setMinimumSize(QSize(32, 32));
        btn_sys_par->setMaximumSize(QSize(32, 32));
        btn_sys_par->setStyleSheet(QStringLiteral(""));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/IRScan/Sys-Para"), QSize(), QIcon::Normal, QIcon::Off);
        btn_sys_par->setIcon(icon26);
        label_27 = new QLabel(groupBox_23);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(230, 60, 60, 20));
        label_27->setMinimumSize(QSize(60, 20));
        label_27->setMaximumSize(QSize(50, 20));
        sysSettingBt_4 = new QToolButton(groupBox_23);
        sysSettingBt_4->setObjectName(QStringLiteral("sysSettingBt_4"));
        sysSettingBt_4->setGeometry(QRect(245, 20, 32, 32));
        sysSettingBt_4->setMinimumSize(QSize(32, 32));
        sysSettingBt_4->setMaximumSize(QSize(32, 32));
        sysSettingBt_4->setStyleSheet(QStringLiteral(""));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/IRScan/Sys-Hos"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_4->setIcon(icon27);
        label_28 = new QLabel(groupBox_23);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(310, 60, 75, 20));
        label_28->setMinimumSize(QSize(75, 20));
        label_28->setMaximumSize(QSize(60, 20));
        sysSettingBt_5 = new QToolButton(groupBox_23);
        sysSettingBt_5->setObjectName(QStringLiteral("sysSettingBt_5"));
        sysSettingBt_5->setGeometry(QRect(330, 20, 32, 32));
        sysSettingBt_5->setMinimumSize(QSize(32, 32));
        sysSettingBt_5->setMaximumSize(QSize(32, 32));
        sysSettingBt_5->setStyleSheet(QStringLiteral(""));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/IRScan/Sys-Cor"), QSize(), QIcon::Normal, QIcon::Off);
        sysSettingBt_5->setIcon(icon28);
        label_41 = new QLabel(groupBox_23);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(25, 20, 20, 55));
        stackedWidget->addWidget(page_sys);

        verticalLayout->addWidget(stackedWidget);

        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout = new QHBoxLayout(page_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
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

        horizontalLayout->addWidget(tableWidget);

        widget = new QWidget(page_3);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        scanPicShow = new QLabel(widget);
        scanPicShow->setObjectName(QStringLiteral("scanPicShow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scanPicShow->sizePolicy().hasHeightForWidth());
        scanPicShow->setSizePolicy(sizePolicy1);
        scanPicShow->setMinimumSize(QSize(480, 640));
        scanPicShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        scanPicShow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(scanPicShow, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        horizontalLayout->addWidget(widget);

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


        horizontalLayout->addWidget(widget_2);

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
        IRScanClass->setWindowTitle(QApplication::translate("IRScanClass", "GTT3.0-Scan", 0));
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
        groupBox_10->setTitle(QString());
        btn_scan->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217", 0));
        toolButton_31->setText(QApplication::translate("IRScanClass", "\345\210\240\351\231\244", 0));
        toolButton_30->setText(QApplication::translate("IRScanClass", "\347\231\273\350\256\260", 0));
        toolButton_32->setText(QApplication::translate("IRScanClass", "\344\277\256\346\224\271", 0));
        label_35->setText(QApplication::translate("IRScanClass", "\346\223\215\n"
"\n"
"\344\275\234", 0));
        groupBox_20->setTitle(QString());
        btn_clock->setText(QApplication::translate("IRScanClass", "\351\241\272\346\227\266\351\222\210", 0));
        btn_anticlock->setText(QApplication::translate("IRScanClass", "\351\200\206\346\227\266\351\222\210", 0));
        btn_cam_up->setText(QApplication::translate("IRScanClass", "\344\270\212\345\215\207", 0));
        btn_cam_down->setText(QApplication::translate("IRScanClass", "\344\270\213\351\231\215", 0));
        btn_focus_far->setText(QApplication::translate("IRScanClass", "\350\277\234", 0));
        btn_focus_near->setText(QApplication::translate("IRScanClass", "\350\277\221", 0));
        label_20->setText(QApplication::translate("IRScanClass", "\346\227\213\350\275\254", 0));
        label_21->setText(QApplication::translate("IRScanClass", "\351\253\230\345\272\246", 0));
        label_22->setText(QApplication::translate("IRScanClass", "\350\201\232\347\204\246", 0));
        groupBox_19->setTitle(QString());
        btn_cam_ups->setText(QApplication::translate("IRScanClass", "\344\270\212", 0));
        btn_cam_downs->setText(QApplication::translate("IRScanClass", "\344\270\213", 0));
        btn_cam_left->setText(QApplication::translate("IRScanClass", "\345\267\246", 0));
        btn_cam_right->setText(QApplication::translate("IRScanClass", "\345\217\263", 0));
        toolButton_61->setText(QApplication::translate("IRScanClass", "\351\241\272\346\227\266\351\222\210", 0));
        label_33->setText(QApplication::translate("IRScanClass", "\346\216\247\n"
"\345\210\266\n"
"\345\217\260", 0));
        label_34->setText(QApplication::translate("IRScanClass", "\346\211\253\n"
"\346\217\217", 0));
        groupBox_11->setTitle(QString());
        toolButton_33->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_34->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_35->setText(QApplication::translate("IRScanClass", "...", 0));
        toolButton_36->setText(QApplication::translate("IRScanClass", "...", 0));
        label_29->setText(QApplication::translate("IRScanClass", "\346\214\211\n"
"\351\241\265\n"
"\347\240\201", 0));
        label_30->setText(QApplication::translate("IRScanClass", "\346\237\245\n"
"\346\211\276", 0));
        groupBox_13->setTitle(QString());
        label_4->setText(QApplication::translate("IRScanClass", "\350\265\267\345\247\213\357\274\232", 0));
        label_5->setText(QApplication::translate("IRScanClass", "\347\273\223\346\235\237\357\274\232", 0));
        toolButton_38->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_31->setText(QApplication::translate("IRScanClass", "\346\214\211\n"
"\346\227\245\n"
"\346\234\237", 0));
        label_32->setText(QApplication::translate("IRScanClass", "\350\214\203\n"
"\345\233\264\n"
"\346\237\245\n"
"\346\211\276", 0));
        toolButton_49->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_19->setText(QApplication::translate("IRScanClass", "\347\274\226\345\217\267\357\274\232", 0));
        toolButton_50->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
        label_18->setText(QApplication::translate("IRScanClass", "\345\247\223\345\220\215\357\274\232", 0));
        groupBox_21->setTitle(QString());
        checkBox_13->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\347\212\266\346\200\201\346\240\217", 0));
        checkBox_15->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\345\212\237\350\203\275\345\214\272", 0));
        checkBox_17->setText(QApplication::translate("IRScanClass", "\351\232\220\350\227\217\351\200\211\346\213\251\351\241\265", 0));
        checkBox_18->setText(QApplication::translate("IRScanClass", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        checkBox_19->setText(QApplication::translate("IRScanClass", "\351\273\221\350\211\262\350\203\214\346\231\257", 0));
        label_40->setText(QApplication::translate("IRScanClass", "\345\256\232\n"
"\n"
"\345\210\266", 0));
        groupBox_22->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        userAreaBt_2->setToolTip(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        userAreaBt_2->setText(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
        label_23->setText(QApplication::translate("IRScanClass", "\347\224\250\346\210\267\345\214\272\346\234\200\345\244\247\345\214\226", 0));
        toolBarExpandBt_2->setText(QApplication::translate("IRScanClass", "\345\261\225\345\274\200\346\211\200\346\234\211\345\267\245\345\205\267\346\240\217", 0));
        label_24->setText(QApplication::translate("IRScanClass", "\345\261\225\345\274\200\346\211\200\346\234\211\345\267\245\345\205\267\346\240\217", 0));
        label_39->setText(QApplication::translate("IRScanClass", "\345\270\203\n"
"\n"
"\345\261\200", 0));
        groupBox_23->setTitle(QString());
        sysSettingBt_2->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_25->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_26->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        btn_sys_par->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        label_27->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        sysSettingBt_4->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        label_28->setText(QApplication::translate("IRScanClass", "\344\270\215\345\235\207\345\214\200\346\240\241\346\255\243", 0));
        sysSettingBt_5->setText(QApplication::translate("IRScanClass", "\344\270\215\345\235\207\345\214\200\346\240\241\346\255\243", 0));
        label_41->setText(QApplication::translate("IRScanClass", "\350\256\276\n"
"\n"
"\347\275\256", 0));
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
        scanPicShow->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("IRScanClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class IRScanClass: public Ui_IRScanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRSCAN_H
