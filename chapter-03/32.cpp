#include<vector>
#include"print.h"

using std::vector;

int main(int argc, char const *argv[])
{
    int arr[10];
    for (unsigned i = 0; i < 10; i++) arr[i] = i;
    int arr2[10];
    for (unsigned i = 0; i < 10; i++) arr2[i] = arr[i];
    printSizeAndContents(arr2, 10);
    vector<int> v;
    for (unsigned i = 0; i < 10; i++) v.push_back(arr[i]);
    printSizeAndContents(v);
    return 0;
}
