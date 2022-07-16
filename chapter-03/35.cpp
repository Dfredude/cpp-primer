#include"print.h"

using std::cout; using std::endl;

// 3.35 | Using pointers, write a program to set the elements in an array to zero.
int main(int argc, char const *argv[])
{
    const unsigned arr_size = 5;
    int test[arr_size];

    for (int* p = test; p < test+arr_size; p++){
        *p = 0;
    }
    printSizeAndContents(test, arr_size);
    return 0;
}
