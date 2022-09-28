#include<iostream>

using std::cout; using std::endl;
// Write a program that accepts the options presented in this section. Print the values of the arguments passed to main.
int main(int argc, char const *argv[])
{
    for (unsigned i = 1; i<argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    return 0;
}
