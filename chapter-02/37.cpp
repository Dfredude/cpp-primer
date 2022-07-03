#include<iostream>
#include<typeinfo>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3, b = 4; // a is an int with value of 3, b is an int with value of 4
    decltype(a) c = a; // c is int
    decltype(a = b) d = a; // d is int&
    cout << "a is: " << typeid(a).name() << endl;
    cout << "b is: " << typeid(b).name() << endl;
    cout << "c is: " << typeid(c).name() << endl;
    cout << "d is: " << typeid(d).name() << endl;
    return 0;
}
