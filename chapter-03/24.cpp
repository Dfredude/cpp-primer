#include<vector>
#include<iostream>
#include"print.h"

using std::vector;
using std::cout; using std::endl;

vector<int> pairSum(vector<int>& vec);
vector<int> oppositeSum(vector<int>& vec);

int main(int argc, char const *argv[])
{
    vector<int> test = {4, 12, 21, 9, 1, 3, 5};
    cout << "Original Vector: ";
    printSizeAndContents(test);
    vector<int> pair_sums = pairSum(test);
    vector<int> opposite_sums = oppositeSum(test);
    cout << "Pair sums: ";
    printSizeAndContents(pair_sums);
    cout << "Opposite sums: ";
    printSizeAndContents(opposite_sums);
    return 0;
}

vector<int> pairSum(vector<int>& vec){
    vector<int> result;
    for (auto i = vec.begin(); i != vec.end()-1; i++){
        result.push_back((*i) + (*(i+1)));
    }
    return result;
}

vector<int> oppositeSum(vector<int>& vec){
    vector<int> sums;
    unsigned j = 1;
    for (auto i = vec.begin(); i < vec.begin() + ((vec.end()-vec.begin())/2); i++, j++){
        sums.push_back(*i+*(vec.end()-j));
    }
    if (vec.size()%2 != 0) sums.push_back(*(vec.begin()+ (unsigned) vec.size()/2));
    return sums;
}
