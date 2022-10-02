#include<iostream>
#include<initializer_list>

using std::cout; using std::endl;
using std::initializer_list;

// Write a function that takes an initializer_list and produces the sum of the elements in the list.

int sum(initializer_list<int> l){
    int total = 0;
    for (auto num: l){
        total += num;
    }
    return total;
}

int main(int argc, char const *argv[])
{
    cout << sum({5, 3, 9}) << endl;
    return 0;
}
