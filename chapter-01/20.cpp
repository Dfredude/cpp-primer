#include<iostream>
#include"Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item curr_item, new_item;
    std::cin >> curr_item;
    while(std::cin >> new_item){
        if (new_item.isbn() == curr_item.isbn()){
            curr_item += new_item;
        } else {
            std::cout << curr_item;
            curr_item = new_item;
        }
    }
    std::cout << curr_item;
    return 0;
}
