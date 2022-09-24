#include<iostream>

using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    int i = 350;
    reset(i);
    cout << reset << endl;
    return 0;
}

void reset(int& i){
    i = 0;
}
