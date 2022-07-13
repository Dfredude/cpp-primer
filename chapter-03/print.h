#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

// Printing vectors

void printSizeAndContents(vector<int>& vec){
    cout << "{";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        if (i == vec.end()-1) break;
        cout << *i << ", ";
    }
    if (vec.size()>0) cout << *(vec.end()-1);
    cout << "} is of size: " << vec.size() << endl;
}

void printSizeAndContents(vector<unsigned>& vec){
    cout << "{";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        if (i == vec.end()-1) break;
        cout << *i << ", ";
    }
    if (vec.size()>0) cout << *(vec.end()-1);
    cout << "} is of size: " << vec.size() << endl;
}

void printSizeAndContents(vector<string> vec){
    cout << "{";
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        if (i == vec.end()-1) break;
        cout << *i << ", ";
    }
    if (vec.size()>0) cout << *(vec.end()-1) << " ";
    cout << "} is of size: " << vec.size() << endl;
}

// Printing Arrays
void printSizeAndContents(int* arr, unsigned const int size){
    cout << "{";
    for (int* i = arr; i != arr+size; i++)
    {
        if (i == arr+(size-1)) break;
        cout << *i << ", ";
    }
    if (size>0) cout << *(arr+size-1);
    cout << "} is of size: " << size << endl;
}


void printSizeAndContents(string* arr, unsigned const int size){
    cout << "{";
    for (string* i = arr; i != arr+size; i++)
    {
        if (i == (arr+(size-1))) break;
        cout << *i << ", ";
    }
    if (size>0) cout << *(arr+size-1);
    cout << "} is of size: " << size << endl;
}


#endif