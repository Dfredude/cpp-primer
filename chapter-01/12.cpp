#include<iostream>
int main()
{
    std::cout << "This program will print numbers ten to zero" <<std::endl;
    for (int num = 10; num >= 0;num--){
        std::cout << num << std::endl;
    }
    return 0;
}