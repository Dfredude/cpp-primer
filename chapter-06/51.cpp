#include<iostream>

using std::cout; using std::endl;


void f(){
    cout << "0" << endl;
}
void f(int){
    cout << "1i" << endl;
}
void f(int, int){
    cout << "2i" << endl;
}
void f(double, double = 3.14){
    cout << "2d" << endl;
}

int main(int argc, char const *argv[])
{
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
