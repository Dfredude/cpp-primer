#include<vector>
#include"print.h"

using std::vector;


// Duplicating each value of a vector
int main(int argc, char const *argv[])
{
    vector<int> random_ints = { 3, 5, 9, 3, 5, 9, 6, 2, 3, 7};
    for (auto i = random_ints.begin(); i != random_ints.end(); i++)
    {
        *i = (*i)*2;
    }

    printSizeAndContents(random_ints);
    
    return 0;
}
