#pragma once
#include <string>
#include <mysql.h>

void lightInsert(MYSQL* con, const std::string l, const int v);
int tempFetch(MYSQL* con);