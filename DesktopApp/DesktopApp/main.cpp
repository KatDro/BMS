#include "DesktopApp.h"
#include <QApplication>
#include <QMessageBox>
#include <iostream>
#include <mysql.h>
#include "Settings.h"
#include <string>
#include <cstdlib>


MYSQL* conn;

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	DesktopApp* w = new DesktopApp;
	QFont font;
	font.setPointSize(12);
	QApplication::setFont(font);
	//creating mysql connection
	conn = mysql_init(NULL);
	conn = mysql_real_connect(conn, HOST_NAME, DB_USERNAME, DB_PASSWORD, DB_NAME, 0, NULL, 0);
	//checking mysql connection
	QMessageBox* connMsg = new QMessageBox;
	if (!conn)
	{
		int repply = QMessageBox::information(connMsg, "Connection",
			"Connection error. Can't connect to database.", QMessageBox::Ok,
			QMessageBox::Abort);
		if (repply == QMessageBox::Abort)
		{
			return 1;
		}
	}
	else
	{
		int repply = QMessageBox::information(connMsg, "Connection",
			"Connection successful.", QMessageBox::Ok);
	}

	w->show();

	return app.exec();
}


