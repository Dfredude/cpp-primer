#include<iostream>

using std::cout; using std::endl;


void swapInts(int* i, int* j);

int main(int argc, char const *argv[])
{
    int i = 5, j = 10;
    swapInts(&i, &j);
    cout << i << " " << j << endl;
    return 0;
}


void swapInts(int* i, int* j){
    int t = *j;
    *j = *i;
    *i = t;
}
