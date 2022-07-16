#include<vector>
#include<iostream>
#include"print.h"

using std::vector;
using std::cout;  using std::endl;
using std::begin; using std::end;

int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 2};

    // Initializing vector from int array
    vector<int> vec((begin(arr)), end(arr));
    printSizeAndContents(vec);
    return 0;
}
