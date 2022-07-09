#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};
#endif