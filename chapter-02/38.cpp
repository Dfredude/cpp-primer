#include<iostream>
#include<typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
    int i = 5;
    auto a = (i);
    decltype((i)) b = (i);
    b++;
    cout << i;
    return 0;
}
