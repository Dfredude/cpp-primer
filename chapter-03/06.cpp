#include<iostream>
#include<string>

using std::cout; using std::endl;
using std::string;

void toXs(string& str){
    for (char& c: str){
        c = 'x';
    }
}

int main()
{
    string test = "Hello";
    toXs(test);
    cout << test << endl;
    return 0;
}
