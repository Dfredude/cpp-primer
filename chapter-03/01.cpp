#include<iostream>

using std::cout; using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    {
        cout << "This program prints numbers 50-100" << endl;
        int num = 50;
        while (num <= 100)
        {
            cout << num << endl;
            num++;
        }
    }    

    cout << "This program will print numbers ten to zero" <<endl;
    int num = 10;
    while (num >= 0){
        cout << num << endl;
        num--;
    }

    int start, finish;
    int step = 1;
    cout << "Enter one number: ";
    cin >> start;
    cout << endl << "Enter a second number: ";
    cin >> finish;
    if (finish < start) step = -1;
    while (start != finish)
    {
        cout << start << endl;
        start += step;
    }
    cout << start << endl;
    return 0;
}
