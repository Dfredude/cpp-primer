#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

// Program that counts vowels in a text (includeing capital)!
int main(int argc, char const *argv[])
{
    string word;
    unsigned vowels_count[5] = {0};
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
    }
    cout << "We have: " << endl <<
            "a: " << vowels_count[0] << endl <<
            "e: " << vowels_count[1] << endl <<
            "i: " << vowels_count[2] << endl <<
            "o: " << vowels_count[3] << endl <<
            "u: " << vowels_count[4] << endl;
    return 0;
}
