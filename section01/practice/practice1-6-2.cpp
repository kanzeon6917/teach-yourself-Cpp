#include <iostream>

int main()
{
    std::string string = "Hello\0";

    std::cout << string << std::endl;
}