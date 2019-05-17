#include "IRScan.h"

#include<QMessageBox>

#include <imgProcDll.h>

#define IMAGE_WIDTH  384
#define IMAGE_HEIGHT 288


unsigned short* g_pDst = new unsigned short[IMAGE_WIDTH*IMAGE_HEIGHT];;
unsigned char* g_pRgb = new unsigned char[IMAGE_WIDTH*IMAGE_HEIGHT * 3];;
float   g_contranst;
float   g_bright;
int	PalType;
int Pal;
Frame g_frame;

int g_picTotalNum = 0;


long FrameProc(long hFrame, long lParam)
{

	Frame* pFrame = (Frame*)hFrame;

	STAT_TEMPER sFull_Temp;

	memcpy(&g_frame, pFrame, sizeof(Frame));

	IRSDK_FrameConvert(&g_frame, g_pDst, g_contranst, g_bright, NULL, &sFull_Temp, 100);

	//IRSDK_Gray2Rgb(g_pDst, g_pRgb, pFrame->width, pFrame->height, PalType, Pal);

	//Mat img;
	//img.create(pFrame->width, pFrame->height,CV_8UC3);

	//memcpy(img.data, g_pRgb, pFrame->width* pFrame->height * 3);

	//imshow("test", img);

	Mat img;
	img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC1);

	data2Img(g_frame.buffer, img, IMAGE_HEIGHT, IMAGE_WIDTH, 25, 16, 2, 2);


	cv::resize(img, img, cv::Size(480, 640));
	QImage image = QImage((const unsigned char*)(img.data), img.cols, img.rows, QImage::Format_RGB888);

	Ui::IRScanClass *pui = (Ui::IRScanClass*)lParam;

	pui->scanPicShow->setPixmap(QPixmap::fromImage(image));

	return 1;
}

IRScan::IRScan(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(21,85,141);color:rgb(255,255,255);}"); //设置表头背景色
	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.tableWidget->horizontalHeader()->setVisible(true);

	connect(ui.imgScanAct, &QAction::triggered, this, &IRScan::imgScan);
	connect(ui.imgSysAct, &QAction::triggered, this, &IRScan::sysSetting);

	connect(ui.btn_scan, SIGNAL(clicked()), this, SLOT(btn_scan_Clicked()));

	g_picTotalNum = 6;
	int count = 0;
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < (g_picTotalNum - 1) / 2 + 1; y++)
		{
			QLabel *lb = new QLabel;
			lb->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
			//lb->setFixedSize(240, 320);
			lb->setText(QString::number(x * ((g_picTotalNum - 1) / 2 + 1) + y));
			lb->setFrameShape(QFrame::Box);
			ui.gridLayout_2->addWidget(lb, x, y);
			lb->setStyleSheet(QLatin1String("backgroud-color:rgb(255,255,255)"));
			count++;
			if (count >= g_picTotalNum) break;
		}
		if (count >= g_picTotalNum) break;
	}

	ui.toolBar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
		"background-color: rgb(19, 35, 67);"));
}


void IRScan::closeEvent(QCloseEvent* event)
{
	//	QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	IRSDK_Stop(0);
	IRSDK_Destroy(0);
	IRSDK_Quit();
}

void IRScan::imgScan()
{
	//QMessageBox::information(this, tr("Information"), tr("imgProc"));

	ui.stackedWidget->setCurrentWidget(ui.pageScan);
	QIcon icon1;
	icon1.addFile(QStringLiteral(":/IRScan/Scan-Sel"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgScanAct->setIcon(icon1);

	QIcon icon2;
	icon2.addFile(QStringLiteral(":/IRScan/Sys"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgSysAct->setIcon(icon2);
	
}

void IRScan::sysSetting()
{
	//QMessageBox::information(this, tr("Information"), tr("imgMerge"));
	ui.stackedWidget->setCurrentWidget(ui.page_sys);
	QIcon icon1;
	icon1.addFile(QStringLiteral(":/IRScan/Scan-Menu"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgScanAct->setIcon(icon1);

	QIcon icon2;
	icon2.addFile(QStringLiteral(":/IRScan/Sys-Sel"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgSysAct->setIcon(icon2);
}


void IRScan::btn_scan_Clicked()
{

	QString str="192.168.1.60";

	if (str.isEmpty())
	{
		QMessageBox::information(this, tr("Tips"), tr("Please Connect the Camera First!!!"), tr("OK"));
		return;
	}

	qint32 i32Port;
	ir_ip = str;
	QStringList strlist = ir_ip.split(".");
	i32Port = strlist.at(3).toInt() * 10 + 30005;

	T_IPADDR IpInfo;
	IpInfo.DataPort = i32Port;

	strcpy(IpInfo.IPAddr, ir_ip.toLocal8Bit().data());

	long ret = IRSDK_Create(0, IpInfo, (CBF_IR)FrameProc, NULL, NULL, (void *)(&ui));
	//IRSDK_DeviceCfg(0, 1);
	IRSDK_Connect(0); //连接，设备根据这个包解析主机的端口，IP，MAC 信息

	//	int re=IRSDK_Play(0);
	IRSDK_Connect(0);

}