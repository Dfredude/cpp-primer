#include<iostream>
#include<typeinfo>
#include<vector>

using std::cout; using std::endl;
using std::vector;

bool arraysAreEqual(int arr1[], int arr2[], unsigned size){
    for (unsigned i = 0; i< size; i++){
        if (arr1[i]!=arr2[i]) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    // Compare two arrays for equality
    int arr1[3] = {5, 5, 9}, arr2[3] = {5, 8, 9};
    if (arraysAreEqual(arr1, arr2, 3)) cout << "arr1 and arr2 are equal!" << endl;
    else cout << "arr1 and arr2 aren't equal!" << endl;

    // Compare two vector for equality
    vector<int> vec1 = {5, 8, 9}, vec2 = {5, 8, 9};
    if (vec1 == vec2) cout << "vec1 and vec2 are equal!" << endl;
    else cout << "vec1 and vec2 aren't equal!" << endl;
    return 0;
}



