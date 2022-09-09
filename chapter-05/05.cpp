#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::endl;
using std::vector;
using std::string;


// Write a lettergrading program!
int main(int argc, char const *argv[])
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade = 60;
    string lettergrade;
    if (grade < 60) lettergrade = scores[0];
    else {
        lettergrade = scores[(grade-50)/10];
        int last_digit = grade%10;
        if (last_digit > 7) lettergrade += "+";
        else if (last_digit < 3 && grade < 100) lettergrade += "-";
    }
    cout << "You got a grade of: " << lettergrade;
    return 0;
}
