#include "IRScan.h"

#include<QMessageBox>
#include <QList>
#include <qfiledialog.h>   
#include <QFileInfo>
#include <imgProcDll.h>
#include "ThumLabel.h"
#include <QFile>
#include <QTextStream>
#include <QMetaEnum>
#include <QElapsedTimer>

#include <windows.h>

//#define IMAGE_WIDTH  384
//#define IMAGE_HEIGHT 288
#define IMAGE_MAX_NUM 15

int g_cam_type = 0;//0：384*288；1：640*480

short int IMAGE_WIDTH = 640;
short int IMAGE_HEIGHT = 480;


Frame g_frame;

int g_picTotalNum = 0;//缩略图窗口数量
int g_flag_play = 1;//视频暂停，播放标志位
int g_cam_flag = 0;//采集图像标识

int g_picNum = 0;//总的图像数
int g_currentPic = 0; //当前图像下标


unsigned short *g_pData[15];
QImage g_qImgShow[15];
QString g_tempFolder;//图像保存目录
QString g_sysPath;//配置文件路径

QString g_camIP = "192.168.1.60";
QString g_hos_code;

extern QString g_ip;
extern QString g_port;
extern QString g_uport;

extern int g_control_port;
extern int g_card_port;

extern QString g_user;
extern QString g_passwd;

extern int iTestFlag;
extern client_t m_cli;
extern int g_log_flag;
extern int g_code[7];
extern void encryption(string& c, int a[]);

int g_reg_flag = 0;
int g_recap_flag = 0;
int g_remember_flag;//记住密码标志

std::vector<std::string> vecPngIDReq;
std::vector<std::string> vecPngIDResp;

QString g_name="王五";
QString g_age="20";
QString g_gender="男";
QString g_ID="id003";
QString g_scanID="SCAN0016";
QString g_cardID="CARD100000000003";

int g_pageSize = 30;
int g_maxPage = 2;
int g_curPage = 1;
int g_show_progress = 1;

int g_sel_mode = 0;//筛选模式：0-初始化，1-按时间，2-按名字，3-全部显示


long FrameProc(long hFrame, long lParam)
{
	//QTime qTime;

	//qTime.start();

	Frame* pFrame = (Frame*)hFrame;

	ShowLabel *pui = ((Ui::IRScanClass*)lParam)->scanPicShow;

//	Sleep(20);
	pui->FrameRecv(pFrame);


	//QDateTime time = QDateTime::currentDateTime();
	//QString strTime = time.toString("MM-dd hh:mm:ss");
	//QString strMessage = QString("%1 : Function:%2 time-%3  \r\n").arg(strTime).arg("FrameProc").arg(qTime.elapsed());
	//QFile outFile("scan.log");
	//outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	//QTextStream ts(&outFile);
	//ts << strMessage << endl;
	//outFile.close();



	//if (pFrame != NULL)
	//{
	////	STAT_TEMPER sFull_Temp;

	//	memcpy(&g_frame, pFrame, sizeof(Frame));

	//	Mat img;
	//	img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC1);

	//	data2Img(g_frame.buffer, img, IMAGE_HEIGHT, IMAGE_WIDTH, 16, 2, 2, 21.5);
	//	cv::resize(img, img, cv::Size(480, 640));

	//	Mat g_dstImage3;
	//	img.copyTo(g_dstImage3);

	//	int thickness = 2;
	//	int lineType = 8;
	//	/*cv::line(g_dstImage3, Point(g_dstImage3.cols / 2, 0),
	//		Point(g_dstImage3.cols / 2, g_dstImage3.rows - 1),
	//		Scalar(255, 255, 255),
	//		thickness,
	//		lineType);
	//	int step = g_dstImage3.rows / 4;

	//	for (int i = 0; i<4; i++)
	//	{
	//		cv::line(g_dstImage3,
	//			Point(g_dstImage3.cols / 2, 0 + i*step),
	//			Point(0, g_dstImage3.cols / 2 * 1.73 + i*step),
	//			Scalar(255, 255, 255),
	//			thickness,
	//			lineType);

	//		cv::line(g_dstImage3,
	//			Point(g_dstImage3.cols / 2, 0 + i*step),
	//			Point(g_dstImage3.cols - 1, g_dstImage3.cols / 2 * 1.73 + i*step),
	//			Scalar(255, 255, 255),
	//			thickness,
	//			lineType);
	//	}*/

	//	cv::line(g_dstImage3, Point(240, 0), Point(240, 639), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 0), Point(0, 415), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 0), Point(479, 415), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 160), Point(0, 575), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 160), Point(479, 575), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 320), Point(56, 639), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 320), Point(424, 639), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 480), Point(148, 639), Scalar(255, 255, 255), thickness, lineType);
	//	cv::line(g_dstImage3, Point(240, 480), Point(332, 639), Scalar(255, 255, 255), thickness, lineType);


	//	QImage image = QImage((const unsigned char*)(g_dstImage3.data), img.cols, img.rows, QImage::Format_RGB888);

	//	QElapsedTimer et;
	//	et.start();
	//	while (et.elapsed() < 25)
	//	{
	//		QCoreApplication::processEvents();
	//	}

	//	QLabel *pui = ((Ui::IRScanClass*)lParam)->scanPicShow;

	//	pui->setPixmap(QPixmap::fromImage(image));

	///*	QDateTime time = QDateTime::currentDateTime();
	//	QString strTime = time.toString("MM-dd hh:mm:ss");
	//	QString strMessage = QString("%1 : Function:%2  \r\n").arg(strTime).arg("FrameProc");
	//	QFile outFile("scan.log");
	//	outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	//	QTextStream ts(&outFile);
	//	ts << strMessage << endl;
	//	outFile.close();*/

	//	img.release();
	//	g_dstImage3.release();

	//}

	return 1;
}

IRScan::IRScan(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(21,85,141);color:rgb(255,255,255);}"); //设置表头背景色
	ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.tableWidget->horizontalHeader()->setVisible(true);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//设置单击选择一行
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);	//设置每行内容不可编辑
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);	//设置只能选择一行，不能选择多行


	connect(ui.checkBox_13, SIGNAL(clicked()), this, SLOT(customize()));
	connect(ui.checkBox_15, SIGNAL(clicked()), this, SLOT(customize()));
	connect(ui.checkBox_17, SIGNAL(clicked()), this, SLOT(customize()));
	connect(ui.checkBox_18, SIGNAL(clicked()), this, SLOT(customize()));
	connect(ui.checkBox_19, SIGNAL(clicked()), this, SLOT(customize()));


	connect(ui.imgScanAct, &QAction::triggered, this, &IRScan::imgScan);
	connect(ui.imgSysAct, &QAction::triggered, this, &IRScan::sysSetting);

	connect(ui.btn_sys_par, SIGNAL(clicked()), this, SLOT(btn_sysPar()));
	connect(ui.btn_set_auth, SIGNAL(clicked()), this, SLOT(btn_setAuth()));
	connect(ui.btn_show_func, SIGNAL(clicked()), this, SLOT(btn_show_func()));

	connect(ui.btn_scan, SIGNAL(clicked()), this, SLOT(btn_scan_Clicked()));
	connect(ui.btn_focus_far, SIGNAL(clicked()), this, SLOT(btn_focusFar()));
//	connect(ui.btn_focus_near, SIGNAL(clicked()), this, SLOT(btn_focusNear()));
	connect(ui.btn_change_3, SIGNAL(clicked()), this, SLOT(btn_sendData()));


	connect(ui.btn_clock, SIGNAL(clicked()), this, SLOT(btn_clockWise()));
	connect(ui.btn_anticlock, SIGNAL(clicked()), this, SLOT(btn_antiClock()));
	connect(ui.btn_cam_up, SIGNAL(clicked()), this, SLOT(btn_camUp()));
	connect(ui.btn_cam_ups, SIGNAL(clicked()), this, SLOT(btn_camUp()));
	connect(ui.btn_cam_down, SIGNAL(clicked()), this, SLOT(btn_camDown()));
	connect(ui.btn_cam_downs, SIGNAL(clicked()), this, SLOT(btn_camDown()));
	connect(ui.btn_cam_left, SIGNAL(clicked()), this, SLOT(btn_camLeft()));
	connect(ui.btn_cam_right, SIGNAL(clicked()), this, SLOT(btn_camRight()));
	
	connect(ui.btn_reg, SIGNAL(clicked()), this, SLOT(btn_reg()));
	connect(ui.btn_del, SIGNAL(clicked()), this, SLOT(btn_del()));
	connect(ui.btn_change, SIGNAL(clicked()), this, SLOT(btn_change()));
	connect(ui.btn_pre, SIGNAL(clicked()), this, SLOT(btn_pre()));
	connect(ui.btn_next, SIGNAL(clicked()), this, SLOT(btn_next()));
	connect(ui.btn_start, SIGNAL(clicked()), this, SLOT(btn_start()));
	connect(ui.btn_end, SIGNAL(clicked()), this, SLOT(btn_end()));
	connect(ui.btn_date_sel, SIGNAL(clicked()), this, SLOT(btn_dateSel()));
	connect(ui.btn_name_sel, SIGNAL(clicked()), this, SLOT(btn_nameSel()));
	connect(ui.btn_show_all, SIGNAL(clicked()), this, SLOT(btn_showAll()));

	int g_picTotalNum = IMAGE_MAX_NUM;
	int count = 0;
	for (int x = 0; x < (g_picTotalNum - 1) / 3 + 1; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			ThumLabel *lb = new ThumLabel;
			if (lb != NULL)
			{
				lb->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
				//lb->setFixedSize(240, 320);
				//lb->setText(QString::number(x * 3 + y + 1));
				lb->setObjectName(QString::number(x * 3 + y));
				lb->setFrameShape(QFrame::Box);
				ui.gridLayout_2->addWidget(lb, x, y);
				//lb->setStyleSheet(QLatin1String("backgroud-color:rgb(255,255,255)"));
				lb->setAlignment(Qt::AlignCenter);
				count++;

			}

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

	ui.lineEdit_cur_page->setText(QString::number(g_curPage));
	ui.lineEdit_page_size->setText(QString::number(g_pageSize));

	ui.dateEdit_start->setDisplayFormat("yyyy-MM-dd");
	ui.dateEdit_end->setDisplayFormat("yyyy-MM-dd");

	ui.checkBox_13->setChecked(true);
	ui.checkBox_15->setChecked(true);
	if (g_remember_flag) ui.checkBox_18->setChecked(true);

	ui.checkBox_17->hide();
	ui.groupBox_22->hide();
	ui.btn_set_hos->hide();
	ui.label_27->hide();
	ui.toolButton_61->hide();
	ui.btn_focus_near->hide();

	updateData();

	statusBar();
	currentTimeLabel = new QLabel; // 创建QLabel控件

	if (currentTimeLabel != NULL)
	{
		currentTimeLabel->setStyleSheet("color:rgb(255,255,255);");
		//ui.statusBar->addWidget(currentTimeLabel); //在状态栏添加此控件
		ui.statusBar->addPermanentWidget(currentTimeLabel); //在状态栏添加此控件
	}

	
	
	QTimer *timer = new QTimer(this);

	if (timer != NULL)
	{
		timer->start(1000); //每隔1000ms发送timeout的信号
		connect(timer, SIGNAL(timeout()), this, SLOT(time_update()));
	}


	IRSDK_Init();

}

//void IRScan::paintEvent(QPaintEvent *event)
//{
//	QWidget::paintEvent(event);
//
//	QElapsedTimer et;
//	et.start();
//	while (et.elapsed() < 25)
//	{
//		QCoreApplication::processEvents();
//	}
//
//
//}




void IRScan::Monitor()
{
	if (0 == IRSDK_IsConnected(0))
	{
		IRSDK_Connect(0);
	}
}


void IRScan::btn_show_func()
{
	if (ui.checkBox_15->isChecked())
	{
		ui.checkBox_15->setChecked(false);
		ui.stackedWidget->hide();
	}
	else
	{
		ui.checkBox_15->setChecked(true);
		ui.stackedWidget->show();
	}
}


void IRScan::customize()
{

	QCheckBox *chbox = (QCheckBox*)this->sender();
	QString text = chbox->text();

	if (text == QString::fromLocal8Bit("显示状态栏"))
	{
		if (chbox->isChecked())
		{
			ui.statusBar->show();
		}
		else
		{
			ui.statusBar->hide();
		}

	}
	if (text == QString::fromLocal8Bit("黑色背景"))
	{
		if (chbox->isChecked())
		{
			ui.page_3->setStyleSheet("backgroud-color:rgb(255,255,255);");
		}
		else
		{
			ui.page_3->setStyleSheet("");

		}

	}
	if (text == QString::fromLocal8Bit("显示功能区"))
	{
		if (chbox->isChecked())
		{
			ui.stackedWidget->show();
		}
		else
		{
			ui.stackedWidget->hide();
		}

	}
	if (text == QString::fromLocal8Bit("记住密码"))
	{
		if (chbox->isChecked())
		{
			g_remember_flag = 1;
		}
		else
		{
			g_remember_flag = 0;
		}

		string s = g_passwd.toStdString();
		encryption(s, g_code);
		ofstream fout("config.ini");

		fout << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString() << ' ' << g_camIP.toStdString() <<' '<< g_user.toStdString() << ' ' << s << ' ' << QString::number(g_remember_flag).toStdString() << ' ' << g_hos_code.toStdString();

		fout.close();

	}


	//	QMessageBox::information(this, tr("Information"), text);
}


void IRScan::time_update()
{
	QDateTime current_time = QDateTime::currentDateTime();
	QString timestr = current_time.toString("yyyy-MM-dd hh:mm:ss  ") + QString::fromLocal8Bit("温度30; 湿度60   "); //设置显示的格式

	currentTimeLabel->setText(timestr); //设置label的文本内容为时间

}

void IRScan::btn_sendData()
{
	
	std::vector<string> vecFiles;
	QDir *dir = new QDir(g_tempFolder);
	if (dir == NULL) return;

	QStringList filter;
	filter<<"*.dat";
	dir->setNameFilters(filter);
	QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));

	if (fileInfo == NULL) return;

	for (int i = 0; i < fileInfo->size(); i++)
	{
		vecFiles.push_back(fileInfo->at(i).filePath().toStdString());
	}

	int size = vecFiles.size();
	if (0 == size)
	{
		ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
		return;
	}


	vecPngIDReq.clear();//需要测试

	int pic_size = IMAGE_WIDTH*IMAGE_HEIGHT+2;

	unsigned short *sPicData = (unsigned short*)malloc(pic_size * sizeof(short));
	
	if (sPicData == NULL) return;

	for (int i = 0; i<size; ++i)
	{
		memset(sPicData, 0, pic_size*sizeof(short));

		std::ifstream fin(vecFiles[i]);
		for (int j = 0; j<pic_size; ++j)
		{
			fin >> *(sPicData + j);
			if (*(sPicData + j) == ' ')
				j--;
		}

	/*	Mat tpic(IMAGE_WIDTH,IMAGE_HEIGHT, CV_16U, sPicData);

	

		Mat tpic2 = Mat(IMAGE_WIDTH, IMAGE_HEIGHT, CV_16U);

		cv::resize(tpic, tpic2, cv::Size(384, 388));

		short t = tpic2.at<unsigned short>(0, 0);

		unsigned short picData[384 * 288];

		for (int i = 0; i < 288; i++)
		{
			for (int j = 0; j < 384; j++)
				picData[i * 384 + j] = tpic2.at<unsigned short>(i, j);
		}
	*/
		conDataBase();

		m_msg = QString::fromLocal8Bit("发送图片 ");
		//m_msg.append(fileInfo->at(i).filePath());


		if (!m_cli.send_png(g_scanID.toStdString(), sPicData, IMAGE_WIDTH*IMAGE_HEIGHT+2, vecPngIDReq))
		{
			m_msg.append(QString::fromLocal8Bit(" 失败\n原因是："));
			m_msg.append(m_cli.get_msg().c_str());
			QMessageBox::information(NULL, "Title", m_msg);
			//m_cli.close();
			ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
			return;
			break;
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit(" 成功"));
		}
	}
	
	QMessageBox::information(NULL, "Title", m_msg+"("+QString::number(size)+")");
	if (0 == vecPngIDReq.size())
	{
		m_msg = QString::fromLocal8Bit("图片index列表为空\n请先调用「发送图片」接口");
	}
	else
	{
		std::map<std::string, std::string> mapUserInfo;
		mapUserInfo["scan_id"] = g_scanID.toStdString();
		//mapUserInfo["card_id"] = sCardID;
		mapUserInfo["pic"] = vec_join(vecPngIDReq, ',');
		mapUserInfo["user"] = g_user.toStdString();

		if (!m_cli.send_info(mapUserInfo))
		{
			m_msg = QString::fromLocal8Bit("发送用户信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			QMessageBox::information(NULL, "Title", m_msg);
			m_cli.close();
			conDataBase();
		}
		else
		{
			m_msg = QString::fromLocal8Bit("发送用户信息成功");
		}
	}
//	QMessageBox::information(NULL, "Title", m_msg);

	for (int i = 0; i < fileInfo->size(); i++)
	{
		QFile::remove(fileInfo->at(i).filePath());
	}
	
	QDir fdir(g_tempFolder);
	QFileInfo Info(g_tempFolder);
	fdir.rmdir(Info.absoluteFilePath());

	for (int i = 0; i < IMAGE_MAX_NUM; i++)
	{
		QLabel *p = ui.widget_2->findChild<QLabel*>(QString::number(i));
		p->clear();
		p->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 255, 255);");
	}

	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

	g_currentPic = 0;

	g_picNum = 0;
	g_cam_flag = 0;

	free(sPicData);

	//IRSDK_Stop(0);
	//IRSDK_Destroy(0);
	//IRSDK_Quit();

	//ui.scanPicShow->clear();
}



void IRScan::btn_showAll()
{
	g_pageSize = ui.lineEdit_page_size->text().toInt();
	g_sel_mode = 3;

	std::map <std::string, std::string> mapParams;
	mapParams["data_type"] = "4";
	mapParams["page_size"] = QString::number(g_pageSize).toStdString();
	//mapParams["page_num"] = QString::number(g_curPage).toStdString();

	//mapParams["name"] = ui.lineEdit_name->text().toStdString();
	////mapParams["cardid"] = "CARD100000000001";
	//mapParams["scanid"] = ui.lineEdit_scanID->text().toStdString();
	//mapParams["begin"] = ui.dateEdit_start->text().toStdString();
	//mapParams["end"] = ui.dateEdit_end->text().toStdString();
	std::string sParams = map_join(mapParams, '&', '=');

	std::string sData;
	
	int iRet = m_cli.get_listdata(sParams, sData);
	m_msg = "";

	if (0 < iRet)
	{
		//m_msg = "结果:\n";
		m_msg.append(QString::fromLocal8Bit(sData.c_str()));
		//QMessageBox::information(NULL, "Title", m_msg);
		QList<QString> lst;
		lst = m_msg.split(';');

	//	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), m_msg);
		//QString temp = lst[0].section('&', 3, 3);
		//int dataNum = temp.section('=', -1, -1).toInt();

		int dataNum = lst.size();


		g_maxPage = (dataNum - 1) / g_pageSize + 1;
		g_curPage = 1;
		ui.lineEdit_cur_page->setText(QString::number(g_curPage));

		lst[0] = lst[0].section('=', -1, -1);
		ui.tableWidget->setRowCount(dataNum<g_pageSize ? dataNum : g_pageSize);
		for (int i = 0; i != (dataNum<g_pageSize ? dataNum : g_pageSize); ++i)
		{
			//		QMessageBox::information(NULL, "Title", lst[i].section(',',1,1));

			addData(i, lst[i].section(',', 0, 0), lst[i].section(',', 1, 1), lst[i].section(',', -1, -1));
		}

	}
	else
	{
		m_msg = QString::fromLocal8Bit("失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
	}

}


void IRScan::btn_nameSel()
{
	g_sel_mode = 2;
	std::map <std::string, std::string> mapParams;

	mapParams["data_type"] = "3";
	//mapParams["page_size"] = QString::number(g_pageSize).toStdString();
	//mapParams["page_num"] = QString::number(g_curPage).toStdString();
	if (ui.lineEdit_name->text()!="")
		mapParams["name"] = ui.lineEdit_name->text().toLocal8Bit();
	//mapParams["cardid"] = "CARD100000000001";
	if (ui.lineEdit_scanID->text()!="")
		mapParams["cardid"] = ui.lineEdit_scanID->text().toStdString();
	//mapParams["begin"] = ui.dateEdit_start->text().toStdString();
	//mapParams["end"] = ui.dateEdit_end->text().toStdString();
	std::string sParams = map_join(mapParams, '&', '=');
	std::string sData;
	
	m_msg = "";
	int iRet1 = m_cli.get_listdata(sParams, sData);
	if (0 < iRet1)
	{
		//m_msg = "结果:\n";
		m_msg.append(QString::fromLocal8Bit(sData.c_str()));
		//QMessageBox::information(NULL, "Title", m_msg);
		QList<QString> lst_1;
		lst_1 = m_msg.split(';');

		QString temp = lst_1[0].section('&', 0, 0);
		int dataNum = temp.section('=', -1, -1).toInt();

		g_maxPage = (dataNum - 1) / g_pageSize + 1;

		lst_1[0] = lst_1[0].section('=', -1, -1);
		if (dataNum>0)
			ui.tableWidget->setRowCount(0);
		else
		{
			m_msg = QString::fromLocal8Bit("未找到记录\n");
			QMessageBox::information(NULL, "Title", m_msg);
			return;
		}
		
		for (int i = 0; i != dataNum; ++i)
		{
		//	QMessageBox::information(NULL, "Title", lst_1[i].section(',',-3,-3));
			mapParams["cardid"] = lst_1[i].section(',', -3, -3).toStdString();
			mapParams["data_type"] = "4";
			sParams = map_join(mapParams, '&', '=');
			int iRet = m_cli.get_listdata(sParams, sData);

			m_msg = "";

			if (0 < iRet)
			{
				//m_msg = "结果:\n";
				m_msg.append(QString::fromLocal8Bit(sData.c_str()));
			//	QMessageBox::information(NULL, "Title", m_msg);
				QList<QString> lst;
				lst = m_msg.split(';');

				QString temp = lst[0].section('&', 0, 0);
				int dataNum = temp.section('=', -1, -1).toInt();

				if (dataNum == 0)
				{
					m_msg = QString::fromLocal8Bit("未找到记录\n");
					QMessageBox::information(NULL, "Title", m_msg);
					return;
				}

				g_maxPage = (dataNum - 1) / g_pageSize + 1;
				lst[0] = lst[0].section('=', -1, -1);
		
				for (int j = 0; j != dataNum; ++j)
				{
					//		QMessageBox::information(NULL, "Title", lst[i].section(',',1,1));
					int row = ui.tableWidget->rowCount();

					if (row >= g_pageSize)
					{
						row = 0;
						ui.tableWidget->setRowCount(0);
						ui.tableWidget->clearContents();
						g_curPage++;
						ui.lineEdit_cur_page->setText(QString::number(g_curPage));
					}
					ui.tableWidget->insertRow(row);

					int index = row;

					addData(index, lst[j].section(',', 0, 0), lst[j].section(',', 1, 1), lst[j].section(',', -1, -1));
					
					ui.tableWidget->selectRow(index);
				}
			}
			else
			{
				m_msg = QString::fromLocal8Bit("查找失败\n");
				m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
				QMessageBox::information(NULL, "Title", m_msg);
				m_cli.close();
				conDataBase();
			}

			

		}
	}
	else
	{
		m_msg = QString::fromLocal8Bit("查找失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
	}

}


void IRScan::btn_dateSel()
{
	g_pageSize = ui.lineEdit_page_size->text().toInt();

	g_sel_mode = 1;
	std::map <std::string, std::string> mapParams;
	mapParams["data_type"] = "4";
	mapParams["page_size"] = QString::number(g_pageSize).toStdString();
//	mapParams["page_num"] = QString::number(g_curPage).toStdString();
	//mapParams["name"] = "张三";
	//mapParams["cardid"] = "CARD100000000001";
	//mapParams["scanid"] = "SCAN001";
	mapParams["begin"] = ui.dateEdit_start->text().toStdString();
	mapParams["end"] = ui.dateEdit_end->text().toStdString();
	std::string sParams = map_join(mapParams, '&', '=');

	std::string sData;
	
	int iRet = m_cli.get_listdata(sParams, sData);
	m_msg = "";

	if (0 < iRet)
	{
		//m_msg = "结果:\n";
		m_msg.append(QString::fromLocal8Bit(sData.c_str()));
		//QMessageBox::information(NULL, "Title", m_msg);
		QList<QString> lst;
		lst = m_msg.split(';');
		
	//	QMessageBox::information(NULL, "Title", m_msg);

		QString temp = lst[0].section('&', 0, 0);
		int dataNum = temp.section('=', -1, -1).toInt();
	//	int dataNum = lst.size() - 1;


		g_maxPage = (dataNum - 1) / g_pageSize + 1;

		g_curPage = 1;
		ui.lineEdit_cur_page->setText(QString::number(g_curPage));

		lst[0] = lst[0].section('=', -1, -1);
		if (dataNum == 0)
		{
			m_msg = QString::fromLocal8Bit("未找到记录\n");
			QMessageBox::information(NULL, "Title", m_msg);
			return;
		}

		ui.tableWidget->setRowCount(dataNum<g_pageSize ? dataNum : g_pageSize);
		for (int i = 0; i != (dataNum<g_pageSize ? dataNum:g_pageSize); ++i)
		{
			//		QMessageBox::information(NULL, "Title", lst[i].section(',',1,1));

			addData(i, lst[i].section(',', 0, 0), lst[i].section(',', 1, 1), lst[i].section(',', -1, -1));
		}

	}
	else
	{
		m_msg = QString::fromLocal8Bit("失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
	}

}


void IRScan::btn_start()
{
	g_curPage = 1;
	ui.lineEdit_cur_page->setText(QString::number(g_curPage));
	g_pageSize = ui.lineEdit_page_size->text().toInt();

	updateData();

}

void IRScan::btn_end()
{
	g_curPage = g_maxPage;
	ui.lineEdit_cur_page->setText(QString::number(g_curPage));
//	g_pageSize = ui.lineEdit_page_size->text().toInt();

	updateData();

}



void IRScan::btn_pre()
{
	g_curPage--;
	if (g_curPage < 1) g_curPage = 1;
	ui.lineEdit_cur_page->setText(QString::number(g_curPage));
//	g_pageSize = ui.lineEdit_page_size->text().toInt();

	updateData();

}

void IRScan::btn_next()
{
	g_curPage++;
	if (g_curPage > g_maxPage) g_curPage = g_maxPage;
	ui.lineEdit_cur_page->setText(QString::number(g_curPage));
//	g_pageSize = ui.lineEdit_page_size->text().toInt();

	updateData();


}

void IRScan::btn_change()
{
	int row = ui.tableWidget->currentIndex().row();

	if (row == -1)
	{
		m_msg = QString::fromLocal8Bit("请选择用户\n");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}


	g_cardID = ui.tableWidget->item(row, 1)->text();
	g_scanID = ui.tableWidget->item(row, 2)->text();
	g_age = ui.tableWidget->item(row, 6)->text();
	g_name = ui.tableWidget->item(row, 3)->text();
	g_gender = ui.tableWidget->item(row, 4)->text();
	g_ID = ui.tableWidget->item(row, 5)->text();

	g_reg_flag = 0;

	rdlg = new RegDlg;

	if (rdlg == NULL) return;

	rdlg->setWindowTitle(QString::fromLocal8Bit("修改"));
	rdlg->setWindowModality(Qt::ApplicationModal);
	rdlg->ui.lineEdit_card->setDisabled(true);
	rdlg->ui.lineEdit_5->setDisabled(true);
	rdlg->ui.btn_reg->setText(QString::fromLocal8Bit("修改"));
	rdlg->exec();


	//	conDataBase();

	if (g_reg_flag)
	{
		std::map<std::string, std::string> mapCardInfo;


		if ("" != g_ID)
		{
			mapCardInfo["identity"] = g_ID.toStdString();
		}
		if ("" != g_name)
		{
			QByteArray cdata = g_name.toLocal8Bit();
			mapCardInfo["name"] = string(cdata);
		}
		if ("" != g_gender)
		{
			QByteArray cdata = g_gender.toLocal8Bit();
			mapCardInfo["sex"] = string(cdata);
		}
		if ("" != g_age)
		{
			mapCardInfo["age"] = g_age.toStdString();
		}
		if ("" != g_cardID)
		{
			mapCardInfo["card_id"] = g_cardID.toStdString();
		}


		m_msg = QString::fromLocal8Bit("卡号: ");
		m_msg.append(g_cardID);
		//QMessageBox::information(NULL, "Title", m_msg);

		int iRet = m_cli.set_cardid(mapCardInfo, g_user.toStdString());
		if (0 < iRet)
		{
			m_msg = QString::fromLocal8Bit("注册卡信息成功\nID:");
			m_msg.append(g_cardID);

		}
		else
		{
			m_msg = QString::fromLocal8Bit("注册卡信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			QMessageBox::information(NULL, "Title", m_msg);
			m_cli.close();
			conDataBase();
			return;
		}
		//QMessageBox::information(NULL, "Title", m_msg);


		std::map<std::string, std::string> mapUserInfo;
		mapUserInfo["scan_id"] = g_scanID.toStdString();
		//mapUserInfo["card_id"] = sCardID;
		mapUserInfo["pic"] = vec_join(vecPngIDReq, ',');
		mapUserInfo["user"] = g_user.toStdString();

		if (!m_cli.send_info(mapUserInfo))
		{
			m_msg = QString::fromLocal8Bit("发送用户信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			QMessageBox::information(NULL, "Title", m_msg);
			m_cli.close();
			conDataBase();
			return;

		}
		else
		{
			m_msg = QString::fromLocal8Bit("修改成功");
		}

		QMessageBox::information(NULL, "Title", m_msg);

		ui.tableWidget->item(row, 1)->setText(g_cardID);
		ui.tableWidget->item(row, 2)->setText(g_scanID);
		ui.tableWidget->item(row, 6)->setText(g_age);
		ui.tableWidget->item(row, 3)->setText(g_name);
		ui.tableWidget->item(row, 4)->setText(g_gender);
	}
}

void IRScan::btn_del()
{
	int row = ui.tableWidget->currentIndex().row();

	if (row == -1)
	{
		m_msg = QString::fromLocal8Bit("请选择用户\n");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}

	g_scanID = ui.tableWidget->item(row, 2)->text();

	int iRet = m_cli.del_scanid(g_scanID.toStdString());
	if (0 < iRet)
	{
		m_msg = QString::fromLocal8Bit("删除扫描ID成功\nID:");
		m_msg.append(g_scanID);
		QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit( "删除扫描ID失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
	}


	ui.tableWidget->removeRow(row);
	//ui.tableWidget->setRowCount(0);
	//updateData();
}



void IRScan::updateData()
{
	std::map <std::string, std::string> mapParams;

	if (g_sel_mode == 0)
	{
		QDateTime current_time = QDateTime::currentDateTime();
		QString start_time = current_time.toString("yyyy-MM-dd"); //
		QString end_time = current_time.addDays(1).toString("yyyy-MM-dd"); //

		ui.dateEdit_start->setDateTime(current_time);
		ui.dateEdit_end->setDateTime(current_time.addDays(1));


		mapParams["data_type"] = "4";
		mapParams["page_size"] = QString::number(g_pageSize).toStdString();
		mapParams["page_num"] = QString::number(g_curPage).toStdString();
		//mapParams["name"] = "张三";
		//mapParams["cardid"] = "CARD100000000001";
		//mapParams["scanid"] = "SCAN001";
		mapParams["begin"] = start_time.toStdString();
		mapParams["end"] = end_time.toStdString();
	}
	else if (g_sel_mode == 1)
	{
		mapParams["data_type"] = "4";
		mapParams["page_size"] = QString::number(g_pageSize).toStdString();
		mapParams["page_num"] = QString::number(g_curPage).toStdString();
		//mapParams["name"] = "张三";
		//mapParams["cardid"] = "CARD100000000001";
		//mapParams["scanid"] = "SCAN001";
		mapParams["begin"] = ui.dateEdit_start->text().toStdString();
		mapParams["end"] = ui.dateEdit_end->text().toStdString();
	}
	else if (g_sel_mode == 2)
	{
		mapParams["data_type"] = "3";
		mapParams["page_size"] = QString::number(g_pageSize).toStdString();
		mapParams["page_num"] = QString::number(g_curPage).toStdString();
		if (ui.lineEdit_name->text() != "")
			mapParams["name"] = ui.lineEdit_name->text().toLocal8Bit();
		//mapParams["cardid"] = "CARD100000000001";
		if (ui.lineEdit_scanID->text() != "")
			mapParams["cardid"] = ui.lineEdit_scanID->text().toStdString();
		mapParams["page_size"] = QString::number(g_pageSize).toStdString();
		mapParams["page_num"] = QString::number(g_curPage).toStdString();
	}
	else
	{
		mapParams["data_type"] = "4";
		mapParams["page_size"] = QString::number(g_pageSize).toStdString();
		mapParams["page_num"] = QString::number(g_curPage).toStdString();
	}
	std::string sParams = map_join(mapParams, '&', '=');

	std::string sData;

	


	int iRet = m_cli.get_listdata(sParams, sData);
	m_msg = "";

	if (0 < iRet)
	{
		//m_msg = "结果:\n";
		m_msg.append(QString::fromLocal8Bit(sData.c_str()));
		//QMessageBox::information(NULL, "Title", m_msg);
		QList<QString> lst;
		lst = m_msg.split(';');

		QString temp = lst[0].section('&', 0, 0);
		int dataNum = temp.section('=', -1, -1).toInt();

		int num = dataNum<g_pageSize ? dataNum : g_pageSize;

		if (num>0)
		{
			if (g_show_progress)
			{
				progressDialog = new QProgressDialog(this);
				if (progressDialog == NULL) return;

				Qt::WindowFlags flags = Qt::Dialog;
				flags |= Qt::WindowCloseButtonHint;

				progressDialog->setWindowFlags(flags);

				QLabel *lb = new QLabel;
				if (lb == NULL) return;
				lb->setStyleSheet("color:rgb(255,255,255)");

				QPushButton *bt = new QPushButton;
				if (bt == NULL) return;
				bt->setStyleSheet("color:rgb(255,255,255)");

				progressDialog->setLabel(lb);
				progressDialog->setLabelText(QString::fromLocal8Bit("数据载入中..."));
				progressDialog->setCancelButton(bt);
				progressDialog->setCancelButtonText(QString::fromLocal8Bit("取消"));     //设置进度对话框的取消按钮的显示文字

				progressDialog->setWindowModality(Qt::WindowModal);
				progressDialog->setMinimumDuration(5);
				progressDialog->setWindowTitle(QString::fromLocal8Bit("数据载入中..."));
				progressDialog->setRange(0, num);                    //设置进度条的范围,从0到num

			}


			g_maxPage = (dataNum - 1) / g_pageSize + 1;


			lst[0] = lst[0].section('=', -1, -1);
			ui.tableWidget->setRowCount(lst.size());
			for (int i = 0; i != lst.size(); ++i)
			{
				//		QMessageBox::information(NULL, "Title", lst[i].section(',',1,1));

				addData(i, lst[i].section(',', 0, 0), lst[i].section(',', 1, 1), lst[i].section(',', -1, -1));
				if (g_show_progress)
				{
					progressDialog->setValue(i + 1);
					if (progressDialog->wasCanceled())               //检测取消按钮是否被触发,如果触发,则退出循环并关闭进度条
						return;
				}
			}
		}
		else
		{
			ui.tableWidget->setRowCount(0);
		}

	}
	else
	{
		m_msg = QString::fromLocal8Bit("失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
	}

	if (g_show_progress)
	{
		g_show_progress = 0;
	}
}


void IRScan::btn_reg()
{
	g_reg_flag = 0;

	rdlg = new RegDlg;

	if (rdlg == NULL) return;

	rdlg->setWindowModality(Qt::ApplicationModal);
	rdlg->exec();

	if (g_reg_flag)
	{
		std::map<std::string, std::string> mapCardInfo;


		if ("" != g_ID)
		{
			mapCardInfo["identity"] = g_ID.toStdString();
		}
		if ("" != g_name)
		{
			QByteArray cdata = g_name.toLocal8Bit();
			mapCardInfo["name"] = string(cdata);
		}
		if ("" != g_gender)
		{
			QByteArray cdata = g_gender.toLocal8Bit();
			mapCardInfo["sex"] = string(cdata);
		}
		if ("" != g_age)
		{
			mapCardInfo["age"] = g_age.toStdString();
		}
		if ("" != g_cardID)
		{
			mapCardInfo["card_id"] = g_cardID.toStdString();
		}


		QString m_msg = QString::fromLocal8Bit("卡号: ");
		m_msg.append(g_cardID);
		QMessageBox::information(NULL, "Title", m_msg);

		int iRet = m_cli.set_cardid(mapCardInfo, g_user.toStdString());
		if (0 < iRet)
		{
			m_msg = QString::fromLocal8Bit("注册卡信息成功\nID:");
			m_msg.append(g_cardID);

		}
		else
		{
			m_msg = QString::fromLocal8Bit("注册卡信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();
			conDataBase();
			return;

		}
		//	QMessageBox::information(NULL, "Title", m_msg);

		m_msg = QString::fromLocal8Bit("卡号: ");
		m_msg.append(g_cardID);
		m_msg.append(QString::fromLocal8Bit("\n扫描ID: "));
		m_msg.append(g_scanID);
		//	QMessageBox::information(NULL, "Title", m_msg);

		iRet = m_cli.set_scanid(g_cardID.toStdString(), g_scanID.toStdString(), g_user.toStdString());
		if (0 < iRet)
		{
			m_msg = QString::fromLocal8Bit("设置扫描ID成功\nID:");
			m_msg.append(g_scanID);
		}
		else
		{
			m_msg = QString::fromLocal8Bit("设置扫描ID失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();
			conDataBase();
			return;

		}
		//	QMessageBox::information(NULL, "Title", m_msg);

		std::map<std::string, std::string> mapUserInfo;
		mapUserInfo["scan_id"] = g_scanID.toStdString();
		//mapUserInfo["card_id"] = sCardID;
		mapUserInfo["pic"] = vec_join(vecPngIDReq, ',');
		mapUserInfo["user"] = g_user.toStdString();

		if (!m_cli.send_info(mapUserInfo))
		{
			m_msg = QString::fromLocal8Bit("发送用户信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();
			conDataBase();
			return;

		}
		else
		{
			m_msg = QString::fromLocal8Bit("注册成功");
		}

		QMessageBox::information(NULL, "Title", m_msg);

		int row = ui.tableWidget->rowCount();

		if (row >= g_pageSize)
		{
			row = 0;
			ui.tableWidget->setRowCount(0);
			ui.tableWidget->clearContents();
			g_curPage++;
			ui.lineEdit_cur_page->setText(QString::number(g_curPage));
		}
		ui.tableWidget->insertRow(row);

		int index = row;

		ui.tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index + 1)));
		ui.tableWidget->setItem(index, 1, new QTableWidgetItem(g_cardID));
		ui.tableWidget->setItem(index, 2, new QTableWidgetItem(g_scanID));
		ui.tableWidget->setItem(index, 3, new QTableWidgetItem(g_name));
		ui.tableWidget->setItem(index, 4, new QTableWidgetItem(g_gender));
		ui.tableWidget->setItem(index, 5, new QTableWidgetItem(g_ID));
		ui.tableWidget->setItem(index, 6, new QTableWidgetItem(g_age));

		QDateTime current_date_time = QDateTime::currentDateTime();
		QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");

		ui.tableWidget->setItem(index, 7, new QTableWidgetItem(current_date));

		ui.tableWidget->selectRow(index);
	}

}

void IRScan::addData(int index,QString cardID,QString scanID,QString RegTime)
{
	ui.tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index+1)));
	ui.tableWidget->setItem(index, 1, new QTableWidgetItem(cardID));
	ui.tableWidget->setItem(index, 2, new QTableWidgetItem(scanID));
	ui.tableWidget->setItem(index, 7, new QTableWidgetItem(RegTime));

	std::string sScanID = scanID.toStdString();
	
	std::map<std::string, std::string> mapUserInfoResp;
	int ret = m_cli.get_info(sScanID, mapUserInfoResp);
 	if (-1 == ret)
	{
		m_msg = QString::fromLocal8Bit("获取用户信息失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
		conDataBase();
		return;
	}
	else if (0 == ret)
	{
		m_msg = QString::fromLocal8Bit("获取用户信息为空");
	//	QMessageBox::information(NULL, "Title", m_msg);
		ui.tableWidget->setItem(index, 3, new QTableWidgetItem(""));
		ui.tableWidget->setItem(index, 4, new QTableWidgetItem(""));
		ui.tableWidget->setItem(index, 6, new QTableWidgetItem(""));
		return;
	}
	else
	{
		m_msg = QString::fromLocal8Bit("获取用户信息成功");
	//	 QMessageBox::information(NULL, "Title", m_msg);
		std::map<std::string, std::string>::iterator it = mapUserInfoResp.begin();

		it = mapUserInfoResp.begin();
		QString rectmp;
		rectmp = it->second.c_str();
		g_age = rectmp;//年龄
		it++;
		rectmp = QString::fromLocal8Bit(it->second.c_str());
		g_ID = rectmp;//证件号
		it++;
		rectmp = QString::fromLocal8Bit(it->second.c_str());
		g_name = rectmp;//姓名
		it++;
		rectmp = it->second.c_str();//图像
		it++;
		rectmp = it->second.c_str();
		it++;
		rectmp = rectmp = it->second.c_str();
		if (rectmp == "0")
			g_gender = QString::fromLocal8Bit("男");//性别
		else
			g_gender = QString::fromLocal8Bit("女");

		ui.tableWidget->setItem(index, 3, new QTableWidgetItem(g_name));
		ui.tableWidget->setItem(index, 4, new QTableWidgetItem(g_gender));
		ui.tableWidget->setItem(index, 5, new QTableWidgetItem(g_ID));
		ui.tableWidget->setItem(index, 6, new QTableWidgetItem(g_age));

		if (mapUserInfoResp.end() != mapUserInfoResp.find("pic"))
		{
			vecPngIDResp.clear();
			int size = split_vec(mapUserInfoResp["pic"].c_str(), vecPngIDResp, ',');
		}
	}



}

void IRScan::conDataBase()
{
	
	if (m_cli.init(g_ip.toStdString(), atoi(g_port.toStdString().c_str())))
	{
		m_msg = QString::fromLocal8Bit("连接成功");

		//QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("连接失败\n请确认IP或端口号");
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
	//	conDataBase();
		return;
	}
	//2-
	std::string sPermissions;
	// 注意： 0表示测试客户端， 1表示正式客户端
	int iRet = m_cli.login_auth(g_user.toStdString().c_str(), g_passwd.toStdString().c_str(), sPermissions, iTestFlag);
	if (0 > iRet)
	{
		m_msg = QString::fromLocal8Bit("获取授权码失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();
//		conDataBase();
	}
	else
	{
		m_msg = QString::fromLocal8Bit("获取授权码成功\n");
		QString sAuth = QString::fromStdString(m_cli.get_auth().c_str());
		QString sRep1 = sAuth.mid(8, 16);
		QString sRep2('*', sRep1.length());
		sAuth.replace(sRep1, sRep2);
		if (0 == iRet)
		{
			m_msg.append(QString::fromLocal8Bit("测试环境: "));

		}
		//	m_msg.append(sAuth);

		int iPermissions = atoi(sPermissions.c_str());
		permissions_t pt;
		if (iPermissions & 0x01)
		{
			pt.p1 = true;
		}
		if (iPermissions & 0x02)
		{
			pt.p2 = true;
		}
		if (iPermissions & 0x04)
		{
			pt.p3 = true;
		}


		if (pt.p1 || pt.p3)
		{
			g_log_flag = 1;
		//	QMessageBox::information(NULL, "Title", m_msg);

		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("没有权限"));
			QMessageBox::information(NULL, "Title", m_msg);
		}

	}

}

void IRScan::btn_clockWise()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
}
void IRScan::btn_antiClock()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
}

void IRScan::btn_camUp()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
}
void IRScan::btn_camDown()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
}

void IRScan::btn_camLeft()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
}
void IRScan::btn_camRight()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请在控制平板上操作！"));
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
	int row = ui.tableWidget->currentIndex().row();

	if (row == -1)
	{
		m_msg=QString::fromLocal8Bit("请选择扫描用户");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}

	g_cardID = ui.tableWidget->item(row, 1)->text();
	g_scanID = ui.tableWidget->item(row, 2)->text();
	g_age = ui.tableWidget->item(row, 6)->text();
	g_name = ui.tableWidget->item(row, 3)->text();
	g_gender = ui.tableWidget->item(row, 4)->text();

	std::string scanID = g_scanID.toStdString();
	QDir dir;
	g_tempFolder = dir.currentPath() + "//Temp//"+g_scanID;

	// 检查目录是否存在，若不存在则新建
	if (!dir.exists(g_tempFolder))
	{
		bool res = dir.mkpath(g_tempFolder);
		//		qDebug() << "新建目录是否成功" << res;
	}

	//IRSDK_Stop(0);
	//IRSDK_Destroy(0);
	//IRSDK_Quit();


	QString str=g_camIP;

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
	//IRSDK_Play(0);
	//	int re=IRSDK_Play(0);
	//IRSDK_Connect(0);

	g_picNum = 0;

	ui.tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
	g_cam_flag = 1;
	
	QTimer *monitor_timer = new QTimer(this);
	monitor_timer->start(500); //每隔500ms发送timeout的信号
	connect(monitor_timer, SIGNAL(timeout()), this, SLOT(Monitor()));

	ui.scanPicShow->update();
}

bool IRScan::eventFilter(QObject *obj, QEvent *event)
{
	if (qobject_cast<QLabel*>(obj) == ui.scanPicShow&&event->type() == QEvent::MouseButtonRelease)
	{
		if (g_flag_play)
		{
			IRSDK_Stop(0);
			g_flag_play = 0;
			if (g_currentPic==0)
				ui.tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
		}
		else
		{
			if (g_cam_flag == 0)
			{
				m_msg = QString::fromLocal8Bit("请点击扫描按钮\n");
				QMessageBox::information(NULL, "Title", m_msg);
				ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
			}
			else
			{
				g_pData[g_currentPic] = new unsigned short[IMAGE_WIDTH*IMAGE_HEIGHT];

				if (g_pData[g_currentPic] == NULL) return false;

				memcpy(g_pData[g_currentPic], g_frame.buffer, IMAGE_HEIGHT*IMAGE_WIDTH*sizeof(short));

				QString filePath = g_tempFolder + "\\" + QString::number(g_currentPic) + ".dat";

				char*  path;
				QByteArray t = filePath.toLatin1(); // must
				path = t.data();

				ofstream fout(path);
				fout << IMAGE_WIDTH << ' ' << IMAGE_HEIGHT << ' ';

				for (int i = 0; i < IMAGE_WIDTH*IMAGE_HEIGHT; i++)
				{
					fout << *(g_frame.buffer + i) << ' ';
				}

				fout.close();

				Mat img;
				img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC3);

				data2Img(g_pData[g_currentPic], img, IMAGE_HEIGHT, IMAGE_WIDTH, 16, 2, 2, 22);

				QImage image = QImage((const unsigned char*)(img.data), img.cols, img.rows, QImage::Format_RGB888);

				g_qImgShow[g_currentPic] = image.copy();


				QLabel *p = ui.widget_2->findChild<QLabel*>(QString::number((g_currentPic - 1 + IMAGE_MAX_NUM) % IMAGE_MAX_NUM));
				p->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(255, 255, 255);");


				p = ui.widget_2->findChild<QLabel*>(QString::number(g_currentPic));
				QPixmap pixmap = QPixmap::fromImage(g_qImgShow[g_currentPic]);

				QPixmap fitpixmap = pixmap.scaled(p->width(), p->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

				p->setPixmap(fitpixmap);
				p->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 0, 0);");

				if (g_recap_flag)
				{
					g_recap_flag = 0;
					g_currentPic = g_picNum;
				}
				else
				{
					g_currentPic = (g_currentPic + 1) % IMAGE_MAX_NUM;

					if (g_picNum < IMAGE_MAX_NUM) g_picNum++;
				}
			}

			IRSDK_Play(0);
			g_flag_play = 1;

		}
		/*QDateTime time = QDateTime::currentDateTime();
		QString strTime = time.toString("MM-dd hh:mm:ss");
		QString strMessage = QString("%1 : Event:%2  \r\n").arg(strTime).arg("MouseEvent");
		QFile outFile("scan.log");
		outFile.open(QIODevice::WriteOnly | QIODevice::Append);
		QTextStream ts(&outFile);
		ts << strMessage << endl;
		outFile.close();*/

		return true;
	}
	else {
		/*QMetaEnum metaEnum = QMetaEnum::fromType<QEvent::Type>();
		QDateTime time = QDateTime::currentDateTime();
		QString strTime = time.toString("MM-dd hh:mm:ss");
		QString strMessage = QString("%1 : Event:%2  \r\n").arg(strTime).arg(metaEnum.valueToKey(event->type()));
		QFile outFile("scan.log");
		outFile.open(QIODevice::WriteOnly | QIODevice::Append);
		QTextStream ts(&outFile);
		ts << strMessage << endl;
		outFile.close();*/

		return false;
		//return QMainWindow::eventFilter(obj, event);
	}
}

void IRScan::btn_focusFar()
{
	IRSDK_NearFarFocus(0, AUTOFOCUS);  //AUTOFOCUS--自动
}

//void IRScan::btn_focusNear()
//{
//	IRSDK_NearFarFocus(0, AUTOFOCUS);
//}

void IRScan::btn_sysPar()
{
	dlg = new SettingDlg;

	dlg->exec();
}

void IRScan::btn_setAuth()
{
	adlg = new SetAuthDlg;

	adlg->exec();
}