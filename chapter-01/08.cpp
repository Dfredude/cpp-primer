#include<iostream>
int main(int argc, char const *argv[])
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" /* "/*" */;
    std::cout << /* "*/" */"; // Fixed string
    return 0;
}
