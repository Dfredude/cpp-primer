#include<iostream>
#include<string>

using std::cout; using std::endl;
using std::string;

void toXs(string& str){
    decltype(str.size()) i = 0;
    while(i<str.size()){
        str[i++] = 'x';
    }
}

int main()
{
    string str = "Hello";
    toXs(str);
    cout << str;
    return 0;
}
