#include<iostream>

using std::cout; using std::endl; using std::cin;

unsigned long long fact(unsigned n);

int main(int argc, char const *argv[])
{
    unsigned n;
    cout << "Welcome to program to find factorial! " << endl <<
    "Unfortunately this program doesn't return correct results bigger than 2^64 yet" << endl <<
    "Please enter a number: ";
    cin >> n;
    cout << "Factorial is " << fact(n);
    return 0;
}

// Factorial function
unsigned long long fact(unsigned n){
    unsigned long long total = 1;
    for (;n > 1; n--)
    {
        total *= n;
    }
    return total;
}