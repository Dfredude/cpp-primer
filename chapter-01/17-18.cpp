#include<iostream>

int main(int argc, char const *argv[])
{
    int curr_value = 0, val = 0;
    if(std::cin >> curr_value){
        int count = 1;
        while (std::cin >> val)
        {
            if (val == curr_value)
                ++count;
            else {
            std::cout << curr_value << " ocurrs " << count
            << " times " << std::endl;
            curr_value = val;
            count = 1;
            }
        } 
        std::cout << curr_value << " ocurrs " << count
            << " times " << std::endl;
    }
    return 0;
}
