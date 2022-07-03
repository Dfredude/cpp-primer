#include<iostream>
#include<typeinfo>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3, b = 4; // a is int, b is int
    decltype(a) c = a; // c is int
    decltype((b)) d = a; // d is int &
    ++c; // c is now 4
    ++d; // a is now 4
    cout << "a is: " << typeid(a).name() << " " << a << endl; // value of 4
    cout << "b is: " << typeid(b).name() << " " << b << endl; // value of 4
    cout << "c is: " << typeid(c).name() << " " << c << endl; // value of 4
    cout << "d is: " << typeid(d).name() << " " << d << endl; // value of 4
    return 0;
}
