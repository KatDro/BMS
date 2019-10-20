#include "DesktopApp.h"

DesktopApp::DesktopApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(exit()));
}
void DesktopApp::exit()
{
	QApplication::exit();
}