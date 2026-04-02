#include <iostream>

int main()
{
    int a = 5*5 - 3*4 + 7;
    std::cout << "a: " << a << std::endl;

    int b = 5*(5 - 3)*4 + 7;
    std::cout << "b: " << b << std::endl;
}