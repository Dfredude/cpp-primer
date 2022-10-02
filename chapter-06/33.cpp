#include<iostream>
#include<vector>

using std::cout; using std::endl;
using std::vector; 

// Write a recursive function to print the contents of a vector.
// Space complexity: O(1) | Time complexity: O(n)
void printVec(const vector<int>& v, unsigned index){ 
    if (index >= v.size()) return;
    cout << v.at(index) << endl;
    printVec(v, ++index);
}



int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3, 4};
    printVec(v, 0);
    return 0;
}

