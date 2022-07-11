#include<vector>
#include<iostream>
#include<string>

using std::vector;
using std::cout; using std::cin; 
using std::string;

// Program to read a sequence of strings from cin and store those.
int main()
{
    vector<string> storage;
    string new_str;
    while (getline(cin, new_str)) storage.push_back(new_str);
    cout << "Vector is " << storage.size() << " long.";
    return 0;
}
