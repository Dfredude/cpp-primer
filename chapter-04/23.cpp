#include<iostream>
#include<string>

using std::cout;
using std::string;

int main(int argc, char const *argv[])
{
    //cout << "word" + 'd';
    string s = "word";
    string pl = s + s[s.size() - 1] == "s" ? "" : "s";
    cout << pl;
    return 0;
}
