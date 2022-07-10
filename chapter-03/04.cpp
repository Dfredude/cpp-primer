#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string whole_string, temp;
    while (getline(cin, temp)){
        whole_string += " " + temp;
    }
    cout << whole_string << endl;
    return 0;
}
