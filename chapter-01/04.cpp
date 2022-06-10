#include<iostream>

int main(){
    int num1, num2;
    std::cout << "Welcome to this program that multiplies 2 numbers" 
    << std::endl << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << std::endl << "Nice! Now enter the second number: ";
    std::cin >> num2;
    std::cout << "The result is: " << num1 * num2;
    std::cin.get();
    // For some reason I need to add an extra cin.get to avoid window closing
    std::cin.get(); 
}