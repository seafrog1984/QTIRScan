#include "IRScan.h"

#include<QMessageBox>
#include <qfiledialog.h>   

#include <imgProcDll.h>

#define IMAGE_WIDTH  384
#define IMAGE_HEIGHT 288
#define IMAGE_MAX_NUM 15

Frame g_frame;

int g_picTotalNum = 0;//缩略图窗口数量
int g_flag_play = 1;//视频暂停，播放标志位

int g_picNum = 0;//总的图像数
int g_currentPic = 0; //当前图像下标

unsigned short *g_pData[15];
QImage g_qImgShow[15];
QString g_tempFolder;//图像保存目录
QString g_sysPath;//配置文件路径

QString g_IP = "192.168.1.60";

long FrameProc(long hFrame, long lParam)
{

	Frame* pFrame = (Frame*)hFrame;

	STAT_TEMPER sFull_Temp;

	memcpy(&g_frame, pFrame, sizeof(Frame));

	Mat img;
	img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC1);

	data2Img(g_frame.buffer, img, IMAGE_HEIGHT, IMAGE_WIDTH, 16, 2, 2,21.5);

	cv::resize(img, img, cv::Size(480, 640));
	QImage image = QImage((const unsigned char*)(img.data), img.cols, img.rows, QImage::Format_RGB888);

	Ui::IRScanClass *pui = (Ui::IRScanClass*)lParam;

	pui->scanPicShow->setPixmap(QPixmap::fromImage(image));

	img.release();
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
	connect(ui.btn_focus_far, SIGNAL(clicked()), this, SLOT(btn_focusFar()));
	connect(ui.btn_focus_near, SIGNAL(clicked()), this, SLOT(btn_focuNear()));
	connect(ui.btn_sys_par, SIGNAL(clicked()), this, SLOT(btn_sysPar()));

	int g_picTotalNum = IMAGE_MAX_NUM;
	int count = 0;
	for (int x = 0; x < (g_picTotalNum - 1) / 3 + 1; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			QLabel *lb = new QLabel;
			lb->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
			//lb->setFixedSize(240, 320);
			lb->setText(QString::number(x * 3 + y + 1));
			lb->setObjectName(QString::number(x * 3 + y));
			lb->setFrameShape(QFrame::Box);
			ui.gridLayout_2->addWidget(lb, x, y);
			lb->setStyleSheet(QLatin1String("backgroud-color:rgb(255,255,255)"));
			lb->setAlignment(Qt::AlignCenter);
			count++;
			if (count >= g_picTotalNum) break;
		}
		if (count >= g_picTotalNum) break;
	}

	ui.toolBar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
		"background-color: rgb(19, 35, 67);"));

	ui.scanPicShow->installEventFilter(this);

	std::string scanID = "test20190521";
	QDir dir;
	g_tempFolder = dir.currentPath() + "//Temp//" + QString::fromStdString(scanID);
	g_sysPath = dir.currentPath() + "//config.ini";

	// 检查目录是否存在，若不存在则新建

	if (!dir.exists(g_tempFolder))
	{
		bool res = dir.mkpath(g_tempFolder);
		//		qDebug() << "新建目录是否成功" << res;
	}


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

	QString str=g_IP;

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

bool IRScan::eventFilter(QObject *obj, QEvent *event)
{
	if (qobject_cast<QLabel*>(obj) == ui.scanPicShow&&event->type() == QEvent::MouseButtonRelease)
	{
		if (g_flag_play)
		{
			IRSDK_Stop(0);
			g_flag_play = 0;
		}
		else
		{
			g_pData[g_picNum] = new unsigned short[IMAGE_WIDTH*IMAGE_HEIGHT];
			memcpy(g_pData[g_picNum], g_frame.buffer, IMAGE_HEIGHT*IMAGE_WIDTH*sizeof(short));

			QString filePath = g_tempFolder + "\\" + QString::number(g_currentPic) + ".dat";

			char*  path;
			QByteArray t = filePath.toLatin1(); // must
			path = t.data();

			ofstream fout(path);
			for (int i = 0; i < IMAGE_WIDTH*IMAGE_HEIGHT; i++)
			{
				fout << *(g_frame.buffer + i) << ' ';
			}

			fout.close();

			Mat img;
			img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC3);

			data2Img(g_pData[g_picNum], img, IMAGE_HEIGHT, IMAGE_WIDTH,  16, 2, 2,22);

			QImage image = QImage((const unsigned char*)(img.data), img.cols, img.rows, QImage::Format_RGB888);

			g_qImgShow[g_picNum] = image.copy();


			QLabel *p = ui.widget_2->findChild<QLabel*>(QString::number((g_currentPic-1+IMAGE_MAX_NUM)%IMAGE_MAX_NUM));
			p->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(255, 255, 255);");


			p = ui.widget_2->findChild<QLabel*>(QString::number(g_currentPic));
			QPixmap pixmap = QPixmap::fromImage(g_qImgShow[g_currentPic]);

			QPixmap fitpixmap = pixmap.scaled(p->width(), p->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

			p->setPixmap(fitpixmap);
			p->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 0, 0);");

			g_currentPic = (g_currentPic + 1) % IMAGE_MAX_NUM;

			if (g_picNum < IMAGE_MAX_NUM) g_picNum++;

			IRSDK_Play(0);
			g_flag_play = 1;

		}
		return true;
	}
	else {
		return false;
		//return QMainWindow::eventFilter(obj, event);
	}
}

void IRScan::btn_focusFar()
{
	IRSDK_NearFarFocus(0, AUTOFOCUS);  //AUTOFOCUS--自动
}

void IRScan::btn_focusNear()
{
	IRSDK_NearFarFocus(0, AUTOFOCUS);
}

void IRScan::btn_sysPar()
{
	dlg = new SettingDlg;

	dlg->show();
}