#include<string>
#include<iostream>

using namespace std;

struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};

// 1.21 Reading two book transactions, summing them and outputting the result
int main(int argc, char const *argv[])
{
    SalesData book1, book2;
    double price;
    cin >> book1.book_no >> book1.units_sold >> price;
    book1.revenue = book1.units_sold*price;
    cin >> book2.book_no >> book2.units_sold >> price;
    book2.revenue = book2.units_sold*price;
    cout << book1.book_no << " " << book1.units_sold+book2.units_sold << " " << book1.revenue+book2.revenue;
    return 0;
}


