#include<iostream>
#include<vector>

using std::cout; using std::endl;
using std::vector; 

/* 6.47 | Revise the program you wrote in the exercises in §6.3.2(p.228) 
that used recursion to print the contents of a vector to conditionally print 
information about its execution. For example, you might print the size of the
vector on each call. Compile and run the program with debugging turned on 
and again with it turned off.
*/
void printVec(const vector<int>& v, unsigned index){ 
    if (index >= v.size()) return;
    cout << "Recursion number: " << index << endl;
    cout << v.at(index) << endl;
    printVec(v, ++index);
}



int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3, 4};
    printVec(v, 0);
    return 0;
}