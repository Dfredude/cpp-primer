#include<vector>
#include<string>
#include<iostream>

using std::vector;
using std::string;
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    // a
    vector<int> v1; // Default initialized. {}
    // b
    vector<int> v2(10); // Directly initialized. Vector of length 10
    // c
    vector<int> v3(10, 42); // Direct initialization. Vector of length 10, all items are of value 42.
    // d
    vector<int> v4{10}; // Direct initialization. {10}
    // e
    vector<int> v5{10, 42}; // Direct initialization. Vector equal to {10, 42}
    // f
    vector<string> v6{10}; // Direct initialization. Vector of length 10
    // g
    vector<string> v7{10, "hi"}; // Direct initialization. Vector of length 10, all values set to "hi"

    cout << "v1" << " is " << v1.size() << " long." << endl;
    cout << "v2" << " is " << v2.size() << " long." << endl;
    cout << "v3" << " is " << v3.size() << " long." << endl;
    cout << "v4" << " is " << v4.size() << " long." << endl;
    cout << "v5" << " is " << v5.size() << " long." << endl;
    cout << "v6" << " is " << v6.size() << " long." << endl;
    cout << "v7" << " is " << v7.size() << " long." << endl;
    return 0;
}
