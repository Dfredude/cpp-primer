#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

// Program that counts vowels in a text (includeing capital)!
// Update: Added count for blank_spaces
int main(int argc, char const *argv[])
{
    string word;
    unsigned vowels_count[5] = {0};
    unsigned blank_spaces = 0;
    while (cin >> word){
        for (auto letter: word )
        {
            if (letter == 'a' || letter == 'A')
            {
                vowels_count[0]++;
            } else if (letter == 'e' || letter == 'E'){
                vowels_count[1]++;
            } else if (letter == 'i' || letter == 'I') {
                vowels_count[2]++;
            } else if (letter == 'o' || letter == 'O') {
                vowels_count[3]++;
            } else if (letter == 'u' || letter == 'U') {
                vowels_count[4]++;
            }
        }
        blank_spaces++;
    }
    cout << "We have: " << endl <<
            "a: " << vowels_count[0] << endl <<
            "e: " << vowels_count[1] << endl <<
            "i: " << vowels_count[2] << endl <<
            "o: " << vowels_count[3] << endl <<
            "u: " << vowels_count[4] << endl <<
            "blank spaces: " << blank_spaces << endl;
    return 0;
}
