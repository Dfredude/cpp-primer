#include<iostream>

int main(int argc, char const *argv[])
{
    int o = 42949672960;
    std::cout << o << std::endl;
    short s = o - -3215646132;
    std::cout << s << std::endl;
    char c = s;
    std::cout << (int) c << std::endl;
    return 0;
}
