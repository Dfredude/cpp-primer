#include<iostream>
#include<vector>
#include"print.h"

using std::cout; using std::cin; using std::endl;
using std::vector;

// 4.21 | Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element.
int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 8, 6, 9, 11};
    for(auto &num : vec){
        if (num%2 != 0){
            num *= 2;
        }
    }
    printSizeAndContents(vec);
    return 0;
}
