#include "DesktopApp.h"
#include <QApplication>
#include <QApplication>
#include <QLabel>
#include <iostream>
#include <windows.h>
#include <mysql.h>

//mysql connection settings
const char* DB_NAME = "BMS";
const char* HOST_NAME = "192.168.1.192";
const char* DB_USERNAME = "remote";
const char* DB_PASSWORD = "remotepass321";

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	//creating mysql connection
	MYSQL* conn;
	conn = mysql_init(NULL);
	conn = mysql_real_connect(conn, HOST_NAME, DB_USERNAME, DB_PASSWORD, DB_NAME, 0, NULL, 0);
	//checking mysql connection

	if (conn)
	{
		QLabel* label = new QLabel(QObject::tr("Udalo sie polaczyc."));
			label->show();
	}
	else
	{
		QLabel* label = new QLabel(QObject::tr("Nie udalo sie polaczyc."));
		label->show();
	}
	return app.exec();
}


