#include<vector>
#include<iostream>

using std::vector;
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    vector<int> ivec = {1, 8, 6};
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--){
        cout << "ix: " << ix << "\t" << "cnt: " << cnt << endl;
        ivec[ix] = cnt;
    }
    return 0;
}
