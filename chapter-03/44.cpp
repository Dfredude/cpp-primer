#include<iostream>

using std::cout; using std::endl;

// Rewriting program using Type aliases


int main(int argc, char const *argv[])
{
    int ia[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    typedef int int_array[4];

    cout << "Printing using for range" << endl;
    // Print using for range
    for (int_array &row : ia){
        for (auto col : row)
        {
            cout << col << endl;
        }
    }

    cout << "Printing using subscripts" << endl;
    // Print using for loop and subscripts
    for (unsigned int i = 0; i < 3; i++){ // Not neccesary
        for (unsigned int j = 0; j < 4; j++)
        {
            cout << ia[i][j] << endl;
        }
    }

    // Print using pointers
    cout << "Printing using pointer" << endl;
    for (int_array *p = ia; p < ia+3; p++) // Hacky way to do it
    {
        for (int* q = *p; q < *p+4; q++)
        {
            cout << *q << endl;
        }
        
    }
    
    return 0;
}