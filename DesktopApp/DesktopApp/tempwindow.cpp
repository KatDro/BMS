#include "tempwindow.h"
//#include <mysql.h>
#include "dbFunction.h"

extern MYSQL* conn;

tempWindow::tempWindow(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	connect(Ui_tempWindow::refreshButton, SIGNAL(clicked()), this, SLOT(on_clicked_refreshButton()));
	int r = tempFetch(conn);
	Ui_tempWindow::TempLCD->display(r);
}

tempWindow::~tempWindow()
{
}

void tempWindow::on_clicked_refreshButton()
{
	int r = tempFetch(conn);
	Ui_tempWindow::TempLCD->display(r);
}