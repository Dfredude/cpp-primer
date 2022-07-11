#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::endl;
using std::vector;
using std::string;

void printSizeAndContents(vector<int>& vec);
void printSizeAndContents(vector<string> vec);


// Printing Vector's size and content
int main(int argc, char const *argv[])
{
    vector<int> v1; // Default initialized. {}
    vector<int> v2(10); // Directly initialized. Vector of length 10
    vector<int> v3(10, 42); // Direct initialization. Vector of length 10, all items are of value 42.
    vector<int> v4{10}; // Direct initialization. {10}
    vector<int> v5{10, 42}; // Direct initialization. Vector equal to {10, 42}
    vector<string> v6{10}; // Direct initialization. Vector of length 10
    vector<string> v7{10, "hi"}; // Direct initialization. Vector of length 10, all values set to "hi"
    printSizeAndContents(v1);
    printSizeAndContents(v2);
    printSizeAndContents(v3);
    printSizeAndContents(v4);
    printSizeAndContents(v5);
    printSizeAndContents(v6);
    printSizeAndContents(v7);
    return 0;
}


void printSizeAndContents(vector<int>& vec){
    cout << "{";
    for (auto& i : vec)
    {
        cout << i << ", ";
    }
    
    cout << "} is of size: " << vec.size() << endl;
}

void printSizeAndContents(vector<string> vec){
    cout << "{";
    for (auto& i : vec)
    {
        cout << i << ", ";
    }
    
    cout << "} is of size: " << vec.size() << endl;
}