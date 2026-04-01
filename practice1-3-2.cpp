#include <iostream>

int main()
{
    int i = 0;
    i += 2 + 4;
    i %= 3;
    std::cout << "i: " << i << std::endl;

    int j = (2 + 4) % 3;
    std::cout << "j: " << j << std::endl;
}