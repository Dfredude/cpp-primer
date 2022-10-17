#include<vector>
#include<iostream>

using std::vector;
using std::cout; using std::endl;


int add(int i, int j){
	return i + j;
}
int substract(int i, int j){
	return j - i;
}
int multiply(int i, int j){
	return i * j;
}
int divide(int i, int j){
	return i/j;
}

int main(int argc, char const *argv[])
{
    // 6.55 | Write four functions that add, subtract, multiply, and divide two int values. Store pointers to these values in your vector from the previous exercise.
    int f(int, int); // Function declaration
    typedef decltype(f)* pf; // Pointer to function 
    vector<pf> vec = {add, substract, multiply, divide};
    // 6.56 | Call each element in the vector and print their result.
    for (auto f : vec){
        cout << f(5, 5) << endl;
    }
    return 0;
}
