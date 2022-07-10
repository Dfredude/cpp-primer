#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string string1, string2;
    cout << "Enter one string: ";
    cin >> string1;
    cout << "Enter another string: ";
    cin >> string2;
    if (string1 == string2) cout << "They are equal!";
    else if (string1.size() == string2.size()) cout << "They are equally large!";
    else {
        cout << (((unsigned) string1.size()) > ((unsigned) string2.size()) ? string1 : string2) << " is bigger!" << endl;
    }
    return 0;
}
