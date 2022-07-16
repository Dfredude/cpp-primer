#include<vector>
#include"print.h"

using std::vector;

// Copy a vector<int> into an array
int main(int argc, char const *argv[])
{
    vector<int> vec = {0, 1, 2};
    int arr[3];
    unsigned i = 0;
    for (auto num : vec) arr[i] = vec[i++];
    printSizeAndContents(arr, 3);
    return 0;
}
