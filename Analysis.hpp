#ifndef ANALYSIS_HPP
#define ANALYSIS_HPP

#include <mysql_connection.h>
#include <mysql/mysql.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <unistd.h>
#include "QuotesDB.hpp"

class Analysis{
public:
    Analysis();
    void analyze();
    void initializeMACDTable(std::string, std::string);
    sql::Driver *driver;
    sql::Connection *con;
    int calcMACD(std::string, std::string);
private:
    double EMA(int, double, int, int, std::string, std::string, std::string, std::string);
    qdb::OandaAPI conn;

};

#endif
