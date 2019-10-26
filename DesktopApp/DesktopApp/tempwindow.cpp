#include "tempwindow.h"
#include <mysql.h>
#include "db_function.h"

extern MYSQL* conn;

tempWindow::tempWindow(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);
	int r = tempFetch(conn);
	Ui_tempWindow::TempLCD->display(r);

}

tempWindow::~tempWindow()
{
}
