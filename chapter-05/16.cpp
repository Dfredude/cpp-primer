#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    // Indefinite while loop version
    // cout << "Starting indefinite while loop" << endl;
    // string name;
    // while (cin >> name)
    // {
    //     cout << name << endl;
    // }
    // Indefinite For loop version
    cout << "Starting indefinite for loop" << endl;
    for (string name; cin >> name; )
    {
        cout << name << endl;
    }

    // Definite For loop
    int fav_nums[5] = { 4, 8, 9, 7};
    for (size_t i = 0; i < 4; i++)
    {
        cout << fav_nums[i] << endl;
    }

    // Definite while loop
    size_t i = 0;
    while (i<4)
    {
        cout << fav_nums[i] << endl;
        i++;
    }
    

    
    
    return 0;
}
