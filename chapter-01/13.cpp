#include<iostream>
int main(){
    std::cout << "This program will print numbers ten to zero" <<std::endl;
    for (int num = 10; num >= 0;num--){
        std::cout << num << std::endl;
    }
    // Second program boots
    int start, finish;
    int step = 1;
    std::cout << "Enter one number: ";
    std::cin >> start;
    std::cout << std::endl << "Enter a second number: ";
    std::cin >> finish;
    if (finish < start) step = -1;
    for (;start != finish;start += step)
    {
        std::cout << start << std::endl;
    }
    std::cout << start << std::endl;
    return 0;
}