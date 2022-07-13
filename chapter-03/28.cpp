#include<string>
#include"print.h"
#include<iostream>

using std::string;

string sa[10]; // {"", "", "", "", "", "", "", "", "", ""}
int ia[10]; // {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
int main(){
    string sa2[10]; // {"", "", "", "", "", "", "", "", "", ""}
    int ia2[10]; // {, , , , , , , , , }
    cout << "TEST";
    printSizeAndContents(sa, 10);
    printSizeAndContents(ia, 10);
    printSizeAndContents(sa2, 10);
    printSizeAndContents(ia2, 10);
}