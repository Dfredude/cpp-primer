#include<iostream>
#include"Sales_item.h"
int main(int argc, char const *argv[])
{
    std::cout << "Program that prints the sum of two sales\n" << std::endl;
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2;
    return 0;
}
