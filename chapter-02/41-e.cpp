#include<string>
#include<iostream>

using namespace std;

struct SalesData
{
    std::string book_no;
    unsigned long units_sold;
    double revenue;
};


// 1.24 Summing different ISBN transactions
int main(int argc, char const *argv[])
{
    SalesData curr, next;
    double price;
    cin >> curr.book_no >> curr.units_sold >> price;
    curr.revenue = curr.units_sold*price;

    while (cin >> next.book_no){
        if (next.book_no == curr.book_no){
            cin >> next.units_sold >> price;
            next.revenue = (next.units_sold*price);
            curr.units_sold += next.units_sold;
            curr.revenue += next.revenue;
        } else {
            cout << curr.book_no << " " << curr.units_sold << " " << curr.revenue << endl;
            curr.book_no = next.book_no;
            cin >> curr.units_sold >> price;
            curr.revenue = curr.units_sold * price;
        }
    }
    cout << curr.book_no << " " << curr.units_sold << " " << curr.revenue << endl;

    return 0;
}


