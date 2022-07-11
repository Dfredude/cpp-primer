#include<vector>
#include<iostream>
#include<string>

using std::vector;
using std::cin; using std::cout; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string str;
    vector<string> strings;
    while (cin >> str){
        strings.push_back(str);
    }
    for (string& s : strings){
        s[0] = toupper(s[0]);
    }
    for (string& s : strings) cout << s << endl;
    return 0;
}
