#include<iostream>
#include<string>

std::string global_str; // Empty string
int global_int; // Value initially is 0

int main(int argc, char const *argv[])
{
    int local_int; // Garbage value
    std::string local_str; // Empty string
    std::cout << "Global string value: " << global_str << '.' << std::endl;
    std::cout << "Local string value: " << local_str << '.' << std::endl;
    std::cout << "Global int value: " << global_int << '.' << std::endl;
    std::cout << "Local int value: " << local_int << '.' << std::endl;
    return 0;
}