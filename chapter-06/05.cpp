#include<iostream>

using std::cout;

unsigned absval(long i){
    return (i < 0) ? i * -1: i;
}


int main(int argc, char const *argv[])
{
    cout << absval(-5);
    return 0;
}


