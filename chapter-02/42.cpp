#include<iostream>
#include"Sales_data.h"

using namespace std;
void a(), b(), c(), d(), e();

int main(int argc, char const *argv[])
{
    a();
    b();
    c();
    d();
    e();
    return 0;
}

// 1.20 Reads transactions and outputs them 
void a(){
    cout << "1.20" << endl;
    SalesData curr;
    double price;

    while (cin >> curr.book_no){
        if (cin >> curr.units_sold){
            cin >> price;
        } else break;
        cout << curr.book_no << " " << curr.units_sold << " " << price << endl;
    }
}

// 1.21 Reading two book transactions, summing them and outputting the result
void b(){
    cout << "1.21" << endl;
    SalesData book1, book2;
    double price;
    cin >> book1.book_no >> book1.units_sold >> price;
    book1.revenue = book1.units_sold*price;
    cin >> book2.book_no >> book2.units_sold >> price;
    book2.revenue = book2.units_sold*price;
    cout << book1.book_no << " " << book1.units_sold+book2.units_sold << " " << book1.revenue+book2.revenue;
}

// 1.22 Reading several transactions
void c(){
    cout << "1.22" << endl;
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
}

// 1.23 Same as "c" but counting transactions
void d(){
    cout << "1.23" << endl;
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
}

// 1.24 Summing different ISBN transactions
void e(){
    cout << "1.24" << endl;
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
}