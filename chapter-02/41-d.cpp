#include<string>
#include<iostream>

using namespace std;

struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};

// 1.23 Same as "d" but counting transactions
int main(int argc, char const *argv[])
{
    SalesData curr, previous;
    double price;
    int count = 1;
    cin >> previous.book_no >> previous.units_sold >> price;

    while (cin >> curr.book_no){
        if (curr.book_no == previous.book_no){
            count++;
            cin >> curr.units_sold >> price;
            previous.revenue += (curr.units_sold*price);
            previous.units_sold += curr.units_sold;
        } else {
            count = 0;
            cout << previous.book_no << " " << previous.units_sold << " " << count << " " << previous.revenue;
        }
    }
    cout << previous.book_no << " " << previous.units_sold  << " " << count << " " << " " << previous.revenue;
    return 0;
}


