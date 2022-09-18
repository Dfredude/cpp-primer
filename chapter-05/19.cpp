#include<iostream>
#include<string>
#include<vector>

using std::cout; using std::cin; using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<string> strs = {"", ""}; 
    auto it = strs.begin();
    do
    {
        cout << "Enter a string: ";
        cin >> *it;
        it++;
    } while (it < strs.end());
    string s1 = strs.at(0);
    string s2 = strs.at(1);
    cout << s1 << " " << s2 << endl;
    
    cout << ((s1 < s2) ? s1 : s2);
    cout << " is less." << endl;
    return 0;
}
