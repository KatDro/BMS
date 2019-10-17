#include <iostream>
#include <windows.h>
#include <mysql.h>

//mysql connection settings
const char* DB_NAME = "BMS";
const char* HOST_NAME = "192.168.1.192";
const char* DB_USERNAME = "remote";
const char* DB_PASSWORD = "remotepass321";

void show_error(MYSQL* con);

int main()
{
	//creating mysql connection
	MYSQL* conn;
	conn = mysql_init(NULL);
	std::cout << "Connecting, please wait..." << std::endl;
	conn = mysql_real_connect(conn, HOST_NAME, DB_USERNAME, DB_PASSWORD, DB_NAME, 0, NULL, 0);
	//checking mysql connection
	if (conn)
		std::cout << "Connected" << std::endl;
	else
	{
		std::cout << "Not connected" << std::endl;
		show_error(conn);
	}
}

void show_error(MYSQL* con)
{
	std::cout << mysql_error(con) << std::endl;
}