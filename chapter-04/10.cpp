
#include<iostream>

using std::cout; using std::cin; using std::endl;

/* 4.10 | Write a condition for a while loop that would read ints 
from the standard input and stop when the value read is equal to 42. */
int getValue(){
    int i;
    cin >> i;
    return i;
}

int main(int argc, char const *argv[])
{
    int i;
    while((i = getValue()) != 42){
        cout << "Nice: " << i << endl;
    }
    cout << "Quitting program..." << endl;
    return 0;
}
