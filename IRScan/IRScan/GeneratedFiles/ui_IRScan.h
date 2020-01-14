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
#include <showlabel.h>

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
    QToolButton *btn_del;
    QToolButton *btn_reg;
    QToolButton *btn_change;
    QLabel *label_35;
    QToolButton *btn_change_3;
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
    QLineEdit *lineEdit_cur_page;
    QToolButton *btn_pre;
    QToolButton *btn_start;
    QToolButton *btn_next;
    QToolButton *btn_end;
    QLineEdit *lineEdit_page_size;
    QLabel *label_29;
    QLabel *label_30;
    QGroupBox *groupBox_13;
    QDateEdit *dateEdit_start;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dateEdit_end;
    QToolButton *btn_date_sel;
    QLabel *label_31;
    QLabel *label_32;
    QToolButton *btn_name_sel;
    QLabel *label_19;
    QToolButton *btn_show_all;
    QLineEdit *lineEdit_name;
    QLabel *label_18;
    QLineEdit *lineEdit_scanID;
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
    QToolButton *btn_set_auth;
    QLabel *label_25;
    QLabel *label_26;
    QToolButton *btn_sys_par;
    QLabel *label_27;
    QToolButton *btn_set_hos;
    QLabel *label_41;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    ShowLabel *scanPicShow;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QToolButton *btn_show_func;
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
        IRScanClass->resize(1559, 878);
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
        stackedWidget->setStyleSheet(QStringLiteral(""));
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
        groupBox_10->setGeometry(QRect(0, 0, 271, 90));
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
        btn_scan->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/IRScan/Scan-Scan"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scan->setIcon(icon2);
        btn_scan->setIconSize(QSize(20, 20));
        btn_scan->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_del = new QToolButton(groupBox_10);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setGeometry(QRect(145, 20, 32, 50));
        btn_del->setMinimumSize(QSize(32, 50));
        btn_del->setMaximumSize(QSize(32, 50));
        btn_del->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/IRScan/Scan-Del"), QSize(), QIcon::Normal, QIcon::Off);
        btn_del->setIcon(icon3);
        btn_del->setIconSize(QSize(20, 20));
        btn_del->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_reg = new QToolButton(groupBox_10);
        btn_reg->setObjectName(QStringLiteral("btn_reg"));
        btn_reg->setGeometry(QRect(65, 20, 32, 50));
        btn_reg->setMinimumSize(QSize(32, 50));
        btn_reg->setMaximumSize(QSize(32, 50));
        btn_reg->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/IRScan/Scan-Log"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reg->setIcon(icon4);
        btn_reg->setIconSize(QSize(20, 20));
        btn_reg->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_change = new QToolButton(groupBox_10);
        btn_change->setObjectName(QStringLiteral("btn_change"));
        btn_change->setGeometry(QRect(185, 20, 32, 50));
        btn_change->setMinimumSize(QSize(32, 50));
        btn_change->setMaximumSize(QSize(32, 50));
        btn_change->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/IRScan/Scan-Change"), QSize(), QIcon::Normal, QIcon::Off);
        btn_change->setIcon(icon5);
        btn_change->setIconSize(QSize(20, 20));
        btn_change->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_35 = new QLabel(groupBox_10);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(30, 20, 16, 50));
        label_35->setStyleSheet(QStringLiteral(""));
        btn_change_3 = new QToolButton(groupBox_10);
        btn_change_3->setObjectName(QStringLiteral("btn_change_3"));
        btn_change_3->setGeometry(QRect(230, 20, 32, 50));
        btn_change_3->setMinimumSize(QSize(32, 50));
        btn_change_3->setMaximumSize(QSize(32, 50));
        btn_change_3->setStyleSheet(QStringLiteral(""));
        btn_change_3->setIcon(icon5);
        btn_change_3->setIconSize(QSize(20, 20));
        btn_change_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        groupBox_20 = new QGroupBox(pageScan);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(980, 0, 450, 90));
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
        btn_clock->setStyleSheet(QStringLiteral(""));
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
        btn_anticlock->setStyleSheet(QStringLiteral(""));
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
        btn_cam_up->setStyleSheet(QStringLiteral(""));
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
        btn_cam_down->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/IRScan/Scan-Down"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cam_down->setIcon(icon9);
        btn_cam_down->setIconSize(QSize(32, 32));
        btn_cam_down->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_focus_far = new QToolButton(groupBox_20);
        btn_focus_far->setObjectName(QStringLiteral("btn_focus_far"));
        btn_focus_far->setGeometry(QRect(260, 20, 32, 32));
        btn_focus_far->setMinimumSize(QSize(32, 32));
        btn_focus_far->setMaximumSize(QSize(32, 32));
        btn_focus_far->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/IRScan/Scan-Focus"), QSize(), QIcon::Normal, QIcon::Off);
        btn_focus_far->setIcon(icon10);
        btn_focus_far->setIconSize(QSize(32, 32));
        btn_focus_far->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_focus_near = new QToolButton(groupBox_20);
        btn_focus_near->setObjectName(QStringLiteral("btn_focus_near"));
        btn_focus_near->setGeometry(QRect(300, 50, 32, 32));
        btn_focus_near->setMinimumSize(QSize(32, 32));
        btn_focus_near->setMaximumSize(QSize(32, 32));
        btn_focus_near->setStyleSheet(QStringLiteral(""));
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
        label_22->setGeometry(QRect(265, 60, 31, 16));
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
        toolButton_61->setStyleSheet(QStringLiteral(""));
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
        groupBox_11->setGeometry(QRect(280, 0, 185, 90));
        groupBox_11->setMinimumSize(QSize(0, 90));
        groupBox_11->setMaximumSize(QSize(16777215, 90));
        groupBox_11->setStyleSheet(QLatin1String("QGroupBox{\n"
"	background-image: url(:/IRScan/Bg2);\n"
"}\n"
"QToolButton{\n"
"	border-image: url(:/IRScan/BorderBg);\n"
"}"));
        lineEdit_cur_page = new QLineEdit(groupBox_11);
        lineEdit_cur_page->setObjectName(QStringLiteral("lineEdit_cur_page"));
        lineEdit_cur_page->setGeometry(QRect(115, 30, 30, 15));
        lineEdit_cur_page->setMinimumSize(QSize(0, 15));
        lineEdit_cur_page->setMaximumSize(QSize(16777215, 16));
        lineEdit_cur_page->setStyleSheet(QStringLiteral(""));
        btn_pre = new QToolButton(groupBox_11);
        btn_pre->setObjectName(QStringLiteral("btn_pre"));
        btn_pre->setGeometry(QRect(100, 30, 15, 15));
        btn_pre->setMinimumSize(QSize(15, 15));
        btn_pre->setMaximumSize(QSize(15, 15));
        btn_pre->setStyleSheet(QStringLiteral(""));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/IRScan/Scan-Left"), QSize(), QIcon::Normal, QIcon::Off);
        btn_pre->setIcon(icon17);
        btn_start = new QToolButton(groupBox_11);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(85, 30, 15, 15));
        btn_start->setMinimumSize(QSize(15, 15));
        btn_start->setMaximumSize(QSize(15, 15));
        btn_start->setStyleSheet(QStringLiteral(""));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/IRScan/Scan-DLeft"), QSize(), QIcon::Normal, QIcon::Off);
        btn_start->setIcon(icon18);
        btn_next = new QToolButton(groupBox_11);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(145, 30, 15, 15));
        btn_next->setMinimumSize(QSize(15, 15));
        btn_next->setMaximumSize(QSize(15, 15));
        btn_next->setStyleSheet(QStringLiteral(""));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/IRScan/Scan-Right"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon19);
        btn_end = new QToolButton(groupBox_11);
        btn_end->setObjectName(QStringLiteral("btn_end"));
        btn_end->setGeometry(QRect(160, 30, 15, 15));
        btn_end->setMinimumSize(QSize(15, 15));
        btn_end->setMaximumSize(QSize(15, 15));
        btn_end->setStyleSheet(QStringLiteral(""));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/IRScan/Scan-DightR"), QSize(), QIcon::Normal, QIcon::Off);
        btn_end->setIcon(icon20);
        lineEdit_page_size = new QLineEdit(groupBox_11);
        lineEdit_page_size->setObjectName(QStringLiteral("lineEdit_page_size"));
        lineEdit_page_size->setGeometry(QRect(100, 60, 51, 16));
        lineEdit_page_size->setStyleSheet(QStringLiteral(""));
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
        groupBox_13->setGeometry(QRect(470, 0, 500, 90));
        groupBox_13->setMinimumSize(QSize(0, 90));
        groupBox_13->setMaximumSize(QSize(16777215, 90));
        groupBox_13->setStyleSheet(QLatin1String("QGroupBox{\n"
"\n"
"	background-image: url(:/IRScan/Bg3);\n"
"\n"
"}"));
        dateEdit_start = new QDateEdit(groupBox_13);
        dateEdit_start->setObjectName(QStringLiteral("dateEdit_start"));
        dateEdit_start->setGeometry(QRect(130, 20, 110, 22));
        dateEdit_start->setStyleSheet(QLatin1String("background-image: url();\n"
"background-color: rgb(12,40,70);\n"
"border-image: url(:/IRProc/Pro-Rect1);"));
        dateEdit_start->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        label_4 = new QLabel(groupBox_13);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 22, 40, 20));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_13);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 52, 40, 20));
        label_5->setStyleSheet(QStringLiteral(""));
        dateEdit_end = new QDateEdit(groupBox_13);
        dateEdit_end->setObjectName(QStringLiteral("dateEdit_end"));
        dateEdit_end->setGeometry(QRect(130, 50, 110, 22));
        dateEdit_end->setStyleSheet(QLatin1String("background-image: url();\n"
"background-color: rgb(12,40,70);\n"
"border-image: url(:/IRProc/Pro-Rect1);"));
        dateEdit_end->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        btn_date_sel = new QToolButton(groupBox_13);
        btn_date_sel->setObjectName(QStringLiteral("btn_date_sel"));
        btn_date_sel->setGeometry(QRect(250, 20, 32, 50));
        btn_date_sel->setMinimumSize(QSize(32, 50));
        btn_date_sel->setMaximumSize(QSize(50, 166667));
        btn_date_sel->setStyleSheet(QStringLiteral(""));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/IRScan/Scan-Filter"), QSize(), QIcon::Normal, QIcon::Off);
        btn_date_sel->setIcon(icon21);
        btn_date_sel->setIconSize(QSize(24, 24));
        btn_date_sel->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_31 = new QLabel(groupBox_13);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(25, 15, 16, 60));
        label_31->setStyleSheet(QStringLiteral(""));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(45, 5, 16, 80));
        label_32->setStyleSheet(QStringLiteral(""));
        btn_name_sel = new QToolButton(groupBox_13);
        btn_name_sel->setObjectName(QStringLiteral("btn_name_sel"));
        btn_name_sel->setGeometry(QRect(400, 20, 32, 50));
        btn_name_sel->setMinimumSize(QSize(32, 50));
        btn_name_sel->setMaximumSize(QSize(32, 50));
        btn_name_sel->setStyleSheet(QStringLiteral(""));
        btn_name_sel->setIcon(icon21);
        btn_name_sel->setIconSize(QSize(24, 24));
        btn_name_sel->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        label_19 = new QLabel(groupBox_13);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(285, 55, 35, 16));
        btn_show_all = new QToolButton(groupBox_13);
        btn_show_all->setObjectName(QStringLiteral("btn_show_all"));
        btn_show_all->setGeometry(QRect(440, 20, 50, 50));
        btn_show_all->setMinimumSize(QSize(50, 50));
        btn_show_all->setMaximumSize(QSize(48, 48));
        btn_show_all->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 59, 101);\n"
"font: 8pt \"\345\256\213\344\275\223\";\n"
"border:0px solid;"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/IRScan/Show-All"), QSize(), QIcon::Normal, QIcon::Off);
        btn_show_all->setIcon(icon22);
        btn_show_all->setIconSize(QSize(48, 48));
        btn_show_all->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        lineEdit_name = new QLineEdit(groupBox_13);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(325, 20, 71, 20));
        label_18 = new QLabel(groupBox_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(285, 25, 35, 15));
        lineEdit_scanID = new QLineEdit(groupBox_13);
        lineEdit_scanID->setObjectName(QStringLiteral("lineEdit_scanID"));
        lineEdit_scanID->setGeometry(QRect(325, 50, 71, 20));
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
        groupBox_21->setGeometry(QRect(0, 0, 400, 90));
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
        checkBox_17->setGeometry(QRect(190, 60, 100, 16));
        checkBox_17->setMinimumSize(QSize(100, 0));
        checkBox_17->setMaximumSize(QSize(85, 16777215));
        checkBox_18 = new QCheckBox(groupBox_21);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));
        checkBox_18->setGeometry(QRect(80, 60, 85, 16));
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
        groupBox_22->setGeometry(QRect(730, 0, 280, 90));
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
        groupBox_23->setGeometry(QRect(400, 0, 311, 90));
        groupBox_23->setStyleSheet(QStringLiteral(""));
        btn_set_auth = new QToolButton(groupBox_23);
        btn_set_auth->setObjectName(QStringLiteral("btn_set_auth"));
        btn_set_auth->setGeometry(QRect(80, 20, 32, 32));
        btn_set_auth->setMinimumSize(QSize(32, 32));
        btn_set_auth->setMaximumSize(QSize(32, 32));
        btn_set_auth->setStyleSheet(QStringLiteral(""));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/IRScan/Sys-RightSet"), QSize(), QIcon::Normal, QIcon::Off);
        btn_set_auth->setIcon(icon25);
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
        label_27->setGeometry(QRect(235, 60, 60, 20));
        label_27->setMinimumSize(QSize(60, 20));
        label_27->setMaximumSize(QSize(50, 20));
        btn_set_hos = new QToolButton(groupBox_23);
        btn_set_hos->setObjectName(QStringLiteral("btn_set_hos"));
        btn_set_hos->setGeometry(QRect(245, 20, 32, 32));
        btn_set_hos->setMinimumSize(QSize(32, 32));
        btn_set_hos->setMaximumSize(QSize(32, 32));
        btn_set_hos->setStyleSheet(QStringLiteral(""));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/IRScan/Sys-Hos"), QSize(), QIcon::Normal, QIcon::Off);
        btn_set_hos->setIcon(icon27);
        label_41 = new QLabel(groupBox_23);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(25, 20, 20, 55));
        stackedWidget->addWidget(page_sys);

        verticalLayout->addWidget(stackedWidget);

        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(page_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget = new QTableWidget(page_3);
        if (tableWidget->columnCount() < 12)
            tableWidget->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(22, 84, 141));
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
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(200, 0));
        tableWidget->setMaximumSize(QSize(400, 16777215));
        tableWidget->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"color: rgb(0, 0, 0);"));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setAutoScrollMargin(15);
        tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setDragDropOverwriteMode(true);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setRowCount(5);
        tableWidget->setColumnCount(12);
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
        widget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        scanPicShow = new ShowLabel(widget);
        scanPicShow->setObjectName(QStringLiteral("scanPicShow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scanPicShow->sizePolicy().hasHeightForWidth());
        scanPicShow->setSizePolicy(sizePolicy1);
        scanPicShow->setMinimumSize(QSize(480, 640));
        scanPicShow->setMaximumSize(QSize(480, 640));
        scanPicShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        scanPicShow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(scanPicShow, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        btn_show_func = new QToolButton(widget);
        btn_show_func->setObjectName(QStringLiteral("btn_show_func"));
        btn_show_func->setMinimumSize(QSize(1, 1));
        btn_show_func->setMaximumSize(QSize(1, 1));

        gridLayout->addWidget(btn_show_func, 2, 2, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(page_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(420, 0));
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
        menuBar->setGeometry(QRect(0, 0, 1559, 23));
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
        IRScanClass->setWindowTitle(QApplication::translate("IRScanClass", "GTT1.0-Scan", 0));
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
        btn_del->setText(QApplication::translate("IRScanClass", "\345\210\240\351\231\244", 0));
        btn_reg->setText(QApplication::translate("IRScanClass", "\347\231\273\350\256\260", 0));
        btn_change->setText(QApplication::translate("IRScanClass", "\344\277\256\346\224\271", 0));
        label_35->setText(QApplication::translate("IRScanClass", "\346\223\215\n"
"\n"
"\344\275\234", 0));
        btn_change_3->setText(QApplication::translate("IRScanClass", "\345\256\214\346\210\220", 0));
        btn_change_3->setShortcut(QApplication::translate("IRScanClass", "Ctrl+S", 0));
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
        label_33->setText(QApplication::translate("IRScanClass", "\346\211\253\n"
"\346\217\217\n"
"\345\217\260", 0));
        label_34->setText(QApplication::translate("IRScanClass", "\346\216\247\n"
"\345\210\266", 0));
        groupBox_11->setTitle(QString());
        btn_pre->setText(QApplication::translate("IRScanClass", "...", 0));
        btn_start->setText(QApplication::translate("IRScanClass", "...", 0));
        btn_next->setText(QApplication::translate("IRScanClass", "...", 0));
        btn_end->setText(QApplication::translate("IRScanClass", "...", 0));
        label_29->setText(QApplication::translate("IRScanClass", "\346\214\211\n"
"\351\241\265\n"
"\347\240\201", 0));
        label_30->setText(QApplication::translate("IRScanClass", "\346\237\245\n"
"\346\211\276", 0));
        groupBox_13->setTitle(QString());
        label_4->setText(QApplication::translate("IRScanClass", "\350\265\267\345\247\213\357\274\232", 0));
        label_5->setText(QApplication::translate("IRScanClass", "\347\273\223\346\235\237\357\274\232", 0));
        btn_date_sel->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_31->setText(QApplication::translate("IRScanClass", "\346\214\211\n"
"\346\227\245\n"
"\346\234\237", 0));
        label_32->setText(QApplication::translate("IRScanClass", "\350\214\203\n"
"\345\233\264\n"
"\346\237\245\n"
"\346\211\276", 0));
        btn_name_sel->setText(QApplication::translate("IRScanClass", "\347\255\233\351\200\211", 0));
        label_19->setText(QApplication::translate("IRScanClass", "\345\215\241\345\217\267\357\274\232", 0));
        btn_show_all->setText(QApplication::translate("IRScanClass", "\346\230\276\347\244\272\345\205\250\351\203\250", 0));
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
        btn_set_auth->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_25->setText(QApplication::translate("IRScanClass", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        label_26->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        btn_sys_par->setText(QApplication::translate("IRScanClass", "\347\263\273\347\273\237\345\217\202\346\225\260", 0));
        label_27->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        btn_set_hos->setText(QApplication::translate("IRScanClass", "\345\215\225\344\275\215\344\277\241\346\201\257", 0));
        label_41->setText(QApplication::translate("IRScanClass", "\350\256\276\n"
"\n"
"\347\275\256", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("IRScanClass", "\345\272\217\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("IRScanClass", "\345\215\241\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("IRScanClass", "\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("IRScanClass", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("IRScanClass", "\346\200\247\345\210\253", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("IRScanClass", "\350\272\253\344\273\275\350\257\201\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("IRScanClass", "\345\271\264\351\276\204", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("IRScanClass", "\347\231\273\350\256\260\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("IRScanClass", "\345\257\274\345\205\245\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("IRScanClass", "\346\211\253\346\217\217\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("IRScanClass", "\345\214\273\351\231\242\345\220\215\347\247\260", 0));
        scanPicShow->setText(QString());
        btn_show_func->setText(QString());
        btn_show_func->setShortcut(QApplication::translate("IRScanClass", "Ctrl+F", 0));
        toolBar->setWindowTitle(QApplication::translate("IRScanClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class IRScanClass: public Ui_IRScanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRSCAN_H
