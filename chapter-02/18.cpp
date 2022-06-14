#include<iostream>

int main(int argc, char const *argv[])
{
    int val = 5, val2 = 10, *ptr = &val;
    // Code to change what the ptr point to
    ptr = &val2;
    std::cout << "Pointer now points to val2: " << *ptr << std::endl;
    // Code that changes the value of the object it points to
    *ptr = 20; 
    std::cout << "We changed val2, now is: " << *ptr << std::endl;
    return 0;
}
