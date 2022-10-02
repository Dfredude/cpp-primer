#include<string>
#include<iostream>

using std::string;
using std::cout; using std::endl;


// Write three additional declarations for the function in the previous exercise. 
// - One should use a type alias 
// - The secon should use a trailing return 
// - The third should use decltype. 
// Which form do you prefer and why?

// 1 - One should use a type alias 
typedef string arrS[10];
arrS arr = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"}; // Array used
// using arrS = string[10];
arrS (&funcTypeAlias( arrS (&original) )){
    return original;
}

// 2 - The second should use a trailing return 

auto funcTrailing(string (&input)[10]) -> string(&)[10]{
    return input;
}

// 3 - The third should use decltype. 

decltype(arr) &funcDecltype(string (&inArr)[10]){
    return inArr;
}

// Helper function
void printArrayStr(const string (&)[10]);

int main(int argc, char const *argv[])
{
    arrS &typeAliasCase = funcTypeAlias(arr);
    printArrayStr(typeAliasCase);
    printArrayStr(funcTrailing(arr));
    printArrayStr(funcDecltype(arr));
    return 0;
}


void printArrayStr(const string (&arr)[10]){
    for (auto s : arr)
    {
        cout << s << endl;
    }
    
}
