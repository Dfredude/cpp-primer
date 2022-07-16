#include<iostream>

using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'}; // Initializing 5 characters array
    const char *cp = ca; // Pointer to array (first element of array)
    while (*cp) { // Dereferencing pointer, body will execute until *cp is false (0)
        cout << *cp << endl; // Printing dereferenced value
        ++cp; // Passing to next pointer. It doesnt matter if it points to an element out of "ca"
    }
    return 0;
}
