#include<iostream>

using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl; // int[10] is 40. int is 4 . 40/4 = 10
    cout << sizeof(p)/sizeof(*p) << endl; // p = 4 bytes. int is 4 bytes.
}
