#include <iostream>

int main()
{
    int i = 42;

    std::cout << "sizeof(i): " << sizeof(i) << std::endl; // iのサイズを表示

    std::cout << "sizeof(i + 1): " << sizeof(i + 1) << std::endl; // i + 1のサイズを表示
}