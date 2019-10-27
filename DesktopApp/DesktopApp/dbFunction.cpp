#include "dbFunction.h"
#include <mysql.h>
#include <string>
#include <QMessageBox>

void lightInsert(MYSQL* conn, const std::string l, const int v)
{
	MYSQL_STMT* st;
	MYSQL_BIND bind[3];
	//Data for insert
	const char* date[] = { l.c_str() };
	char date_ind[] = { STMT_INDICATOR_NTS };
	const char* value[] = { (char*)v };
	char value_ind[] = { STMT_INDICATOR_NTS };
	char id_ind[] = { STMT_INDICATOR_NULL };
	unsigned int array_size = 1;

	st = mysql_stmt_init(conn);
	mysql_stmt_prepare(st, "INSERT INTO light VALUES(?, ?, ?)", -1);

	memset(bind, 0, sizeof(MYSQL_BIND) * 3);

	bind[0].u.indicator = id_ind;
	bind[0].buffer_type = MYSQL_TYPE_LONG;
	bind[1].buffer = date;
	bind[1].buffer_type = MYSQL_TYPE_STRING;
	bind[1].u.indicator = date_ind;
	bind[2].buffer = value;
	bind[2].buffer_type = MYSQL_TYPE_TINY;
	bind[2].u.indicator = value_ind;

	mysql_stmt_attr_set(st, STMT_ATTR_ARRAY_SIZE, &array_size);
	mysql_stmt_bind_param(st, bind);
	mysql_stmt_execute(st);

	mysql_stmt_close(st);
}

int tempFetch(MYSQL* conn)
{
	MYSQL_RES* result;
	MYSQL_ROW row;
	MYSQL_FIELD* field;
	int num_fields;
	int temp_result;

	mysql_query(conn, "SELECT * FROM temp WHERE id = (SELECT MAX(id) FROM temp)");
	result = mysql_store_result(conn);
	if (!result)
	{
		QMessageBox* connMsg = new QMessageBox;
		QMessageBox::information(connMsg, "Error",
			"MySQL store_result error.", QMessageBox::Ok);
	}
	num_fields = mysql_num_fields(result);
	field = mysql_fetch_fields(result);
	if (!field)
	{
		QMessageBox* connMsg = new QMessageBox;
		QMessageBox::information(connMsg, "Error",
			"MySQL fetch_field error.", QMessageBox::Ok);
	}

	row = mysql_fetch_row(result);
	temp_result = atoi(row[num_fields - 1]);
	mysql_free_result(result);
	return temp_result;
}