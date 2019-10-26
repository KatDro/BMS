#include "DesktopApp.h"
#include "tempwindow.h"

DesktopApp::DesktopApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exit()));
	connect(ui.tempButton, SIGNAL(clicked()), this, SLOT(on_clicked_tempButton()));
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