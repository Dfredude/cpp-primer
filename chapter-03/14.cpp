#include<vector>
#include<iostream>

using std::vector;
using std::cout; using std::cin; 

// Program to read a sequence of ints from cin and store those.
int main(int argc, char const *argv[])
{
    vector<int> storage;
    int new_int;
    while (cin >> new_int) storage.push_back(new_int);
    cout << "Vector is " << storage.size() << " long.";
    return 0;
}
