#include<iostream>
#include<typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    const int i = 42; // const int
    auto j = i; // j is an int
    const auto &k = i; // k is a const int referenced data
    auto *p = &i; // p is a int const *
    const auto j2 = i, &k2 = i; // j2 is a const int, k2 is a const int referenced data
    cout << "i: " << typeid(i ).name()<< endl;
    cout << "j: " << typeid(j ).name()<< endl;
    cout << "k: " << typeid(k ).name()<< endl;
    cout << "p: " << typeid(p ).name()<< endl;
    cout << "j2: " << typeid(j2).name() << endl;
    cout << "k2: " << typeid(k2).name() << endl;
    return 0;
}
