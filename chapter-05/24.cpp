#include<iostream>
#include<stdexcept>

using std::cout; using std::cin; using std::endl;
using std::logic_error;

int main(int argc, char const *argv[])
{
    int i, j;
    cin >> i >> j;
    if (j == 0) throw logic_error("Can't divide by 0");
    cout << i / j << endl;
    return 0;
}
