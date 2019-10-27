#include "lightwindow.h"
#include "QtFunction.h"
#include "dbFunction.h"
#include <QMessageBox>
#include <QFile>
#include <QDateTime>

extern MYSQL* conn;

lightWindow::lightWindow(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	connect(Ui_lightWindow::pushButton, SIGNAL(clicked()), this, SLOT(on_clicked_pushButton()));
	QPixmap LightOff;
	QString str = "picture/LightOff.png";
	bool load_check = LightOff.load(str);
	if (load_check == false)
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "Fail to load picture", QMessageBox::Ok);
	}
	if (!QFile::exists(str))
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "File do not exist", QMessageBox::Ok);
	}
	Ui_lightWindow::LightLabel->setPixmap(LightOff);
	is_lightOn = false;
}

lightWindow::~lightWindow()
{
}

void lightWindow::on_clicked_pushButton()
{
	QPixmap LightOn;
	QString str_lightOn = "picture/LightOn.png";
	bool load_check = LightOn.load(str_lightOn);
	if (load_check == false)
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "Fail to load picture LightOn", QMessageBox::Ok);
	}
	if (!QFile::exists(str_lightOn))
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "File LightOn do not exist", QMessageBox::Ok);
	}

	QPixmap LightOff;
	QString str_lightOff = "picture/LightOff.png";
	load_check = LightOff.load(str_lightOff);
	if (load_check == false)
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "Fail to load picture LightOff", QMessageBox::Ok);
	}
	if (!QFile::exists(str_lightOff))
	{
		QMessageBox* msg = new QMessageBox;
		QMessageBox::information(msg, "Fail", "File LightOff do not exist", QMessageBox::Ok);
	}

	QDateTime dateTime = QDateTime::currentDateTime();
	QString* Qstr_dateTime = new QString(dateTime.toString("dd.MM.yy hh.mm.ss"));
	std::string str_dateTime = Qstr_dateTime->toStdString();
	if (is_lightOn == true)
	{
		Ui_lightWindow::LightLabel->setPixmap(LightOff);
		is_lightOn = false;
		lightInsert(conn, str_dateTime, is_lightOn);
	}
	else if (is_lightOn == false)
	{
		Ui_lightWindow::LightLabel->setPixmap(LightOn);
		is_lightOn = true;
		lightInsert(conn, str_dateTime, is_lightOn);
	}
		
}