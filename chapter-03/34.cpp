#include<iostream>

using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int *p1 = arr;
    int *p2 = (arr)+4;
    cout << *p1 << endl;
    cout << *p2 << endl;
    p2 += p1 - p2;
    cout << *p1 << endl;
    return 0;
}
