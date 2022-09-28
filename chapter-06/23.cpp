#include<iostream>

using std::cout; using std::endl;
using std::begin; using std::end;

void print(const int* begin, const int* end){
    while (begin != end)
    {
        cout << *begin++ << endl;
    }
}

void print2d(const int *begin, int column_size, int row_size){
    int items = column_size*row_size;
    for (size_t i = 0; i < items; i++)
    {
        cout << *begin+i << endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2d[4][4] = { 
                        { 1, 2, 3, 4,},
                        { 5, 6, 7, 8,},
                        { 9, 10, 11, 12},
                        { 13, 14, 15, 16}
                    };
    print(begin(arr), end(arr));
    int *start = *arr2d;
    print2d(start, 4, 4);
    return 0;
}
