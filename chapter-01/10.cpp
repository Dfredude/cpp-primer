#include<iostream>
int main(int argc, char const *argv[])
{
    std::cout << "This program will print numbers ten to zero" <<std::endl;
    int num = 10;
    while (num >= 0){
        std::cout << num << std::endl;
        num--;
    }
    return 0;
}
