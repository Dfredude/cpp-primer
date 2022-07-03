#include<string>
#include<iostream>

using namespace std;

struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};

int main(int argc, char const *argv[])
{
    SalesData curr, previous;
    double price;
    cin >> previous.book_no >> previous.units_sold >> price;

    while (cin >> curr.book_no){
        if (curr.book_no == previous.book_no){
            cin >> curr.units_sold >> price;
            previous.revenue += (curr.units_sold*price);
            previous.units_sold += curr.units_sold;
        } else {
            cout << previous.book_no << " " << previous.units_sold << " " << previous.revenue;
        }
    }
    cout << previous.book_no << " " << previous.units_sold << " " << previous.revenue;

    return 0;
}


