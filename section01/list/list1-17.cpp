#include <iostream>

int main()
{
    char c = 99;
    std::cout << c << std::endl; // char型の値を表示

    std::cout << static_cast<int>(c) << std::endl; // char型をint型に変換して表示
}