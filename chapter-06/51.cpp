#include<iostream>

using std::cout; using std::endl;

// 6.51 | Write all four versions of f. Each function should print a distinguishing message. Check your answers for the previous exercise. If your answers were incorrect, study this section until you understand why your answers were wrong.


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
