#include<iostream>

using std::cout;

unsigned absval(long i){
    if (i < 0) return i * -1;
    return i;
}


int main(int argc, char const *argv[])
{
    cout << absval(-5);
    return 0;
}


