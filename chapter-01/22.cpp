#include<iostream>
#include<exception>
#include"Sales_item.h"
int main(int argc, char const *argv[])
{
    Sales_item curr_item, new_item;
    std::cin >> curr_item;
    while(std::cin >> new_item){
        try
        {
            if (new_item.isbn() == curr_item.isbn()){
            curr_item += new_item;
            } else {
            throw std::exception("Unable to sum sales with different ISBN number!");
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl << "The sum is: " << curr_item;
    return 0;
}
