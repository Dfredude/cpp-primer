#include<string>
#include<iostream>

using std::string;
using std::cout; using std::endl;


bool hasCapital(string& s){
    for (auto& c : s)
    {
        if (isupper(c)) return true;
    }
    return false;
}

void strToLower(string& s){
    for (auto& c : s)
    {
        if (isupper(c)) c = tolower(c);
    }
}

int main(int argc, char const *argv[])
{
    string s = "Hello";
    cout << hasCapital(s) << endl;
    strToLower(s);
    cout << hasCapital(s) << endl;
    return 0;
}
