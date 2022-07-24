#include<iostream>

int main(int argc, char const *argv[])
{
    const char *cp = "Hello World";
    if (cp && *cp) std::cout << *cp;
    return 0;
}
