#include<vector>
#include<iostream>

using std::vector;
using std::cout; using std::endl;

vector<int> pairSum(vector<int>& vec);
vector<int> oppositeSum(vector<int>& vec);
void printVec(vector<int>& vec);

int main(int argc, char const *argv[])
{
    vector<int> test = {4, 12, 21, 9, 1, 3, 5};
    cout << "Original Vector: ";
    printVec(test);
    vector<int> pair_sums = pairSum(test);
    vector<int> opposite_sums = oppositeSum(test);
    cout << "Pair sums: ";
    printVec(pair_sums);
    cout << "Opposite sums: ";
    printVec(opposite_sums);
    return 0;
}



vector<int> oppositeSum(vector<int>& vec){
    vector<int> sums;
    for (decltype(vec.size()) i = 0; i < vec.size()/2; i++){
        sums.push_back(vec[i]+vec[vec.size()-1-i]);
    }
    if (vec.size()%2 != 0) sums.push_back(vec[vec.size()/2]);
    return sums;
}

vector<int> pairSum(vector<int>& vec){
    vector<int> result;
    int sum = 0;
    bool pair = false;
    for (auto i : vec){
        if (pair) {
            result.push_back(sum+i); 
            sum = 0; 
            pair = false;
        }
        sum += i;
        pair = true;
    }
    return result;
}

void printVec(vector<int>& vec){
    cout << "{";
    for (decltype(vec.size()) i = 0; i < vec.size()-1; i++){
        cout << ' ' << vec[i] << ',';
    }
    if (vec.size() > 0) cout << ' ' << vec[vec.size()-1] << " }" << endl;
}
