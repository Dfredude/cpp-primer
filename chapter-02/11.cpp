#include<iostream>

extern int ix = 1024; // Declaration and definition
int iy; // Declaration and definition
extern int iz; // Declaration

int main(int argc, char const *argv[])
{
    std::cout << "ix: " << ix << std::endl;
    std::cout << "iy: " << iy << std::endl;
    std::cout << "iz: " << iz << std::endl; // Error, because variable is not defined
    return 0;
}
