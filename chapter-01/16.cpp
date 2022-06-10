#include<iostream>

int main(){
    std::cout << "This program will sum, any numbers you enter"
    << std::endl << "Please enter the numbers (one by one):";
    int sum, value;
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "The sum is: " << value;
    return 0;
}