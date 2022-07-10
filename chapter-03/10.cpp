#include<iostream>
#include<string>

using std::cout; using std::endl; using std::cin;
using std::string;

string removePunctuation(string str);

// Program that removes punctuation marks from a string/text
int main()
{
    string str, new_str;
    getline(cin, str);
    new_str = removePunctuation(str);
    cout << new_str;
    return 0;
}

string removePunctuation(string str){
    string new_str;
    for (auto c: str){
        if (!ispunct(c)) new_str += c;
    }
    return new_str;
}
