#include<string>
#include<iostream>

using std::string;
using std::cout; using std::endl;

bool cStringsAreEqual(char* cstring1, char* cstring2){
    // Naive way of doing it.
    // unsigned i = 0;
    // while (cstring1[i]!= 0 && cstring2[i]!=0)
    // {
    //     if (cstring1[i] != cstring2[i]!=0){
    //         return false;
    //     }
    //     i++;
    // }
    // if (cstring1[i] != cstring2[i]) return false;
    return !strcmp(cstring1, cstring2); // Better way to do it!
    
}

int main(int argc, char const *argv[])
{
    // Compare two strings
    string string1 = "Hello", string2 = "Hello";
    if (string1 == string2) cout << "C++ Strings equal!" << endl;
    // Compare c-style strings
    char* cstring1 = "Hi", *cstring2 = "Hi";
    if (cstring1 == cstring2) cout << "This doesn't work! Haha"; // C-style strings doesn't support this operator
    if (cStringsAreEqual(cstring1, cstring2)) cout << "C style strings are equal!" << endl; // Created custom function to compare strings
    return 0;
}
