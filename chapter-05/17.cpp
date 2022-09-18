#include<iostream>
#include<vector>

using std::cout; using std::cin; using std::endl;
using std::vector;

bool prefixVec(const vector<int>&, const vector<int>&);

int main(int argc, char const *argv[])
{
    vector<int> vec1 = {0, 1, 1, 2};
    vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};

    cout << prefixVec(vec2, vec1) << endl;
    return 0;
}

bool prefixVec(const vector<int>& v1, const vector<int>& v2){
    size_t v1_size = v1.size(), v2_size = v2.size();
    if (v1_size <= v2_size){
        for (auto it1 = v1.begin(), it2 = v2.begin(); it1 < v1.end(); ++it1, ++it2)
        {
            if (*it1 != *it2) return false;
        }
    } else {
        for (auto it2 = v2.begin(), it1 = v1.begin(); it2 < v2.end(); ++it2, ++it1)
        {
            if (*it2 != *it1) return false;
        }
    }

    return true;
}
