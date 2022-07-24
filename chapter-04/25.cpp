#include<iostream>
#include<string>

using std::cout; using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    char c = 'q';
    cout << (~'q'<<6) << endl;
    int i = 4294960000;
    cout << i << endl;
    return 0;
}
