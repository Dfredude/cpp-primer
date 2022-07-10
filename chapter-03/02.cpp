#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    string choice;
    cout << "Do you want to read a line or a word at a time? ";
    cin >> choice;
    string input;
    if (choice[0]=='l') while (getline(cin, input)) cout << input << endl;
    else if (choice[0]=='w') while (cin >> input) cout << input << endl;
    return 0;
}
