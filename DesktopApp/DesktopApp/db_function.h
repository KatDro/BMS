#pragma once
#include <string>
#include <mysql.h>

void tempInsert(MYSQL* con, std::string l, int v);
int tempFetch(MYSQL* con);