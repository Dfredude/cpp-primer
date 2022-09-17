#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

// Program that counts vowels in a text (includeing capital)!
int main(int argc, char const *argv[])
{
    string word;
    unsigned vowels_count[5] = {0};
    unsigned blank_spaces = 0;
    unsigned sequences_count = 0;
    while (cin >> word){
        bool sequence = false;
        for (auto letter: word )
        {
            if (sequence) {
                if (letter == 'f') sequences_count++;
                else if (letter == 'l') sequences_count++;
                else if (letter == 'i') sequences_count++;
                sequence = false;
            }
            else if (letter == 'a' || letter == 'A')
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
            } else if (letter == 'f'){
                sequence = true;
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
            "blank spaces: " << blank_spaces << endl <<
            "ff, fl & fi: " << sequences_count << endl;
    return 0;
}
