#include<string>
#include<iostream>

using namespace std;

struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};


// 1.20 Reads transactions and outputs them 
int main(int argc, char const *argv[])
{
    SalesData curr;
    double price;

    while (cin >> curr.book_no){
        if (cin >> curr.units_sold){
            cin >> price;
        } else break;
        cout << curr.book_no << " " << curr.units_sold << " " << price << endl;
    }
    return 0;
}


