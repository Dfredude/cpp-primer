#include"print.h"

// Program to define an array of ten ints.
int main(int argc, char const *argv[])
{
    int arr[10];
    for (unsigned i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    printSizeAndContents(arr, 10);
    return 0;
}
