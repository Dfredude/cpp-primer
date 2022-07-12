#include<vector>
#include<iostream>
#include"print.h"

using std::vector;
using std::cin; using std::cout;

int main(int argc, char const *argv[])
{
    vector<int> nums = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    vector<unsigned> clusters(10, 0);
    unsigned grade;
    // scores.txt as input. `25.exe <scores.txt`
    while (cin >> grade){
        (*(clusters.begin()+grade/10))++;
    }
    printSizeAndContents(clusters);
    return 0;
}
