#include<iostream>

using std::cout; using std::endl;

// Function to swap to int pointers
void swapPointers(int* &p1, int* &p2){
    int* pt = p1;
    p1 = p2, p2 = pt;
}

int main(int argc, char const *argv[])
{
    int i = 5, j = 10;
    int *pointeri = &i, *pointerj = &j;
    
    swapPointers(pointeri, pointerj);

    cout << *pointeri << endl << *pointerj;
    return 0;
}
