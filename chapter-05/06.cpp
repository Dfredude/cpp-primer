#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::endl;
using std::vector;
using std::string;

// Write a lettergrading program using the conditional operator!
int main(int argc, char const *argv[])
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade = 60;
    string lettergrade;
    lettergrade = scores[(grade-50)/10];
    int last_digit = grade%10;
    lettergrade += grade < 60 ? scores[0] : last_digit > 7 ? "+" : 
        last_digit < 3 && grade < 100 ? "-" : "";
    cout << "You got a grade of: " << lettergrade;
    return 0;
}