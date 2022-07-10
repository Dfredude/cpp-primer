#include<iostream>
#include<string>

using std::cout; using std::endl;
using std::string;

void toXs(string& str){
    for (char c: str){ // Using char instead of char& doesn't mutate string
        c = 'x';
    }
}

int main()
{
    string test = "Hello";
    toXs(test);
    cout << test << endl; // test stays the same
    return 0;
}