#include<string>
#include<iostream>

using std::strcpy; using std::strcat;
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    // Define two character arrays from strings
    char arr1[] = "Hello";
    char arr2[7] = " there";
    char arr3[1];
    strcpy(arr3, arr1);
    strcat(arr3, arr2);
    cout << arr3 << endl;
    return 0;
}
