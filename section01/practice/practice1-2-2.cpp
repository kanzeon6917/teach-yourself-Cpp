#include <iostream>

int sum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    std::cout << "sum(5, 1, -2): " << sum(5, 1, -2) << std::endl;
}