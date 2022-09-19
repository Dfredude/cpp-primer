#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    bool repeated = false;
    string curr, prev;
    cin >> prev;
    while (cin >> curr){
        if (curr == prev){
            cout << curr << " was repeated" << endl;
            repeated = true;
            break;
        }
    }
    if (!repeated) cout << "No word was repeated" << endl;
    return 0;
}
