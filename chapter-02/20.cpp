#include<iostream>

int main(int argc, char const *argv[])
{
    // What is the following program doing?
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1; // Multiplying 42 * 42 and storing the value in 'i'
    std::cout << *p1 << std::endl << p1;
    return 0;
}
