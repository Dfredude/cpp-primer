#include<iostream>
#include"Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item curr_item, new_item;
    std::cout << "This program sums multiple sales transactions";
    std::cin >> curr_item;
    while(std::cin >> new_item){
        if (new_item.isbn() == curr_item.isbn()){
            curr_item += new_item;
        } else {
            std::cout << std::endl << curr_item;
            curr_item = new_item;
        }
    }
    
    std::cout << std::endl << curr_item;
    return 0;
}
