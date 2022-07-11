#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::endl;
using std::vector;
using std::string;

void printSizeAndContents(vector<int>& vec){
    cout << "{";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << ", ";
    }
    cout << "} is of size: " << vec.size() << endl;
}

void printSizeAndContents(vector<string> vec){
    cout << "{";
    for (auto i = vec.begin(); i!= vec.end(); i++)
    {
        cout << *i << ", ";
    }
    
    cout << "} is of size: " << vec.size() << endl;
}

#endif