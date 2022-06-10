#include<iostream>

int main(){
    std::cout << "Enter two numbers: "<< std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << "The sum of " << num1;
    std::cout << " and " << num2 << " is: " << num1+num2;
}