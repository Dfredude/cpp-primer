#include<iostream>

using std::cout;

int max(int i, int* p){
    return (i > *p) ? i : *p;
}

int main(int argc, char const *argv[])
{
    // What type to use for pointer? int*
    int i = 10, *p = &i;
    cout << max(5, p);
    return 0;
}
