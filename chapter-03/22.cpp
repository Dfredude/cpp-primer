#include<vector>
#include<string>
#include<iostream>

using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

void printSizeAndContents(vector<string> vec);

// Making uppercase each first letter of each paragraph in a text.
int main(int argc, char const *argv[])
{
    vector<string> text;
    string temp;
    while(getline(cin, temp)) text.push_back(temp);
    for(auto it = text.begin(); it != text.end(); it++){
            if (!it->empty()){
                (*it)[0] = toupper((*it)[0]);
            }
        }
    printSizeAndContents(text);
    return 0;
}

void printSizeAndContents(vector<string> vec){
    cout << "{";
    for (auto i = vec.begin(); i!= vec.end(); i++)
    {
        cout << *i << ", ";
    }
    
    cout << "} is of size: " << vec.size() << endl;
}
