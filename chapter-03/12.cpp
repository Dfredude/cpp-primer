#include<vector>
#include<string>

using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
    vector<vector<int>> ivec; // LEGAL. Default initialization. Empty vector.
    vector<string> svec = ivec; // ILLEGAL. Copy initialization has to have both types the same. vec<str> != vec<vec<int>>
    vector<string> svec(10, "null"); // LEGAL. Direct initialization, 10 items with "null"
    return 0;
}
