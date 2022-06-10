#include<iostream>
int main(){
    int start, finish;
    int step = 1;
    std::cout << "Enter one number: ";
    std::cin >> start;
    std::cout << std::endl << "Enter a second number: ";
    std::cin >> finish;
    if (finish < start) step = -1;
    while (start != finish)
    {
        std::cout << start << std::endl;
        start += step;
    }
    return 0;
    
}