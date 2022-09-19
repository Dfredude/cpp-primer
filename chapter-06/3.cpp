#include<iostream>

using std::cout; using std::endl;

unsigned long long fact(unsigned n);

int main(int argc, char const *argv[])
{
    cout << fact(20);
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
