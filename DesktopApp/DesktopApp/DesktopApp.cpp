#include "DesktopApp.h"
#include "tempwindow.h"
#include "lightwindow.h"
#include "humiditywindow.h"

DesktopApp::DesktopApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exit()));
	connect(ui.tempButton, SIGNAL(clicked()), this, SLOT(on_clicked_tempButton()));
	connect(ui.lightButton, SIGNAL(clicked()), this, SLOT(on_clicked_lightButton()));
	connect(ui.humButton, SIGNAL(clicked()), this, SLOT(on_clicked_humButton()));
}
void DesktopApp::exit()
{
	QApplication::exit();
}
void DesktopApp::on_clicked_tempButton()
{
	tempWindow* TWindow = new tempWindow();
	TWindow->show();
}
void DesktopApp::on_clicked_lightButton()
{
	lightWindow* LWindow = new lightWindow();
	LWindow->show();
}
void DesktopApp::on_clicked_humButton()
{
	humidityWindow* HWindow = new humidityWindow;
	HWindow->show();
}