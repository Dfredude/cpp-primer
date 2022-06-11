#include<iostream>
int main(){
    int start, finish;
    std::cout << "Enter one number: ";
    std::cin >> start;
    std::cout << std::endl << "Enter a second number (Bigger than the first one): ";
    
    while (std::cin >> finish){
        if (finish > start) break;
        std::cout << "Pleas enter a bigger number than " << start << " ! ";
    }
    while (start <= finish)
    {
        std::cout << start << std::endl;
        start ++;
    }
    return 0;
}