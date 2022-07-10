#include<string>
#include<iostream>
#include<typeinfo>

using std::cout; using std::endl;
using std::string;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s){ cout << typeid(c).name() << endl;} 
    return 0;
}
