#include "IRScan.h"
#include <QtWidgets/QApplication>
#include "ActiveDlg.h"
#include <fstream>
#include <iostream>  
#include<QMessageBox>


#include "LogDlg.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

#include <Dbghelp.h>
#pragma comment(lib,"Dbghelp.lib")

using namespace std;

int g_active_flag = 0;
int g_time_flag = 0;

static LONG WINAPI exceptionCallback(struct _EXCEPTION_POINTERS* exceptionInfo)
{
	QString savePath = QCoreApplication::applicationDirPath() + "/dump/";
	QDir dir(savePath);
	if (!dir.exists() && !dir.mkpath(savePath)) {
		
		return EXCEPTION_EXECUTE_HANDLER;
	}

	savePath.append("assit_");
	savePath.append(QDateTime::currentDateTime().toString("yyyyMMddhhmmsszzz"));
	savePath.append(".dmp");

	HANDLE dump = CreateFileW(savePath.toStdWString().c_str(), GENERIC_WRITE,
		0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == dump) {
		
		return EXCEPTION_EXECUTE_HANDLER;
	}

	MINIDUMP_EXCEPTION_INFORMATION miniDumpExceptionInfo;
	miniDumpExceptionInfo.ExceptionPointers = exceptionInfo;
	miniDumpExceptionInfo.ThreadId = GetCurrentThreadId();
	miniDumpExceptionInfo.ClientPointers = TRUE;
	DWORD idProcess = GetCurrentProcessId();
	MiniDumpWriteDump(GetCurrentProcess(), idProcess, dump,
		MiniDumpNormal, &miniDumpExceptionInfo, NULL, NULL);

	CloseHandle(dump);

	
	return EXCEPTION_EXECUTE_HANDLER;
}




void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString & str)
{
	/* 往控制台中打印 */
	switch (type)
	{
	case QtDebugMsg:
		fprintf(stderr, "%s\n", str);
		break;
	case QtWarningMsg:
		fprintf(stderr, "Warning: %s\n", str);
		break;
	case QtCriticalMsg:
		fprintf(stderr, "Critical: %s\n", str);
		break;
	case QtFatalMsg:
		fprintf(stderr, "Fatal: %s\n", str);
		abort();
	}

	/* 输出到文件 */
	QDateTime time = QDateTime::currentDateTime();
	QString strTime = time.toString("MM-dd hh:mm:ss");
	QString strMessage = QString("%1 File:%2  Line:%3  Function:%4\r\n  %5")
		.arg(strTime).arg(context.file).arg(context.line).arg(context.function).arg(str);

	QString strMsg("");
	switch (type)
	{
	case QtDebugMsg:
		strMsg = QString("Debug");
		break;
	case QtInfoMsg:
		strMsg = QString("Info");
		break;
	case QtWarningMsg:
		strMsg = QString("Warning:");
		break;
	case QtCriticalMsg:
		strMsg = QString("Critical:");
		break;
	case QtFatalMsg:
		strMsg = QString("Fatal:");
		//abort();
		break;
	default:
		strMsg = QString("Err");
		break;
	}

	strMessage = strMsg + strMessage;

	/*QString txt;

	switch (type) {
	case QtDebugMsg:
		txt = QString("Debug: %1\n").arg(str);
		break;

	case QtWarningMsg:
		txt = QString("Warning: %1\n").arg(str);
		break;
	case QtCriticalMsg:
		txt = QString("Critical: %1\n").arg(str);
		break;
	case QtFatalMsg:
		txt = QString("Fatal: %1\n").arg(str);
		abort();
	}*/
	QFile outFile("scan.log");
	outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	QTextStream ts(&outFile);
	ts << strMessage << endl;
	outFile.close();

}




int main(int argc, char *argv[])
{	

	SetUnhandledExceptionFilter(exceptionCallback);
	qInstallMessageHandler(myMessageOutput);


	QDateTime time = QDateTime::currentDateTime();
	QString strTime = time.toString("MM-dd hh:mm:ss");
	QFile outFile("scan.log");
	outFile.open(QIODevice::WriteOnly);
	QTextStream ts(&outFile);
	ts << strTime << endl;
	outFile.close();

	//qDebug() << "hello, world!";
	//qWarning() << "this is a warning!";
	//qCritical("This is a critical message");
	//qFatal("This is a fatal message");

	_CrtDumpMemoryLeaks();
	QApplication::addLibraryPath("./plugins");
	QApplication a(argc, argv);

	//IRScan w;
	//w.show();

	ifstream fin("ac.dat");
	char str[200];

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("程序未激活！"));
		//	exit(-1);
	}
	else
	{
		fin >> str;
	}
	//	AfxMessageBox(_T(str));

	char mac[200];
	getMac(mac);
	//	AfxMessageBox(_T(mac));

	if (CheckSN(mac, str))
	{
		g_active_flag = 1;
	}
	else
	{
		g_active_flag = 0;

		ActiveDlg w;
		w.show();

		return a.exec();
	}

	if (CheckTime(str))
	{
		g_time_flag = 1;
	}
	else
	{
		g_time_flag = 0;
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("注册码已失效！"));

		ActiveDlg w;
		w.show();

		return a.exec();
	}


	if (g_active_flag&&g_time_flag)
	{
		LogDlg w;
		w.show();

		return a.exec();
	}


	//LogDlg w;

	//w.show();
	//return a.exec();
}
