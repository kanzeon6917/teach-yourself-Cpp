#include <iostream>

int main()
{
    int* ptr = 0; // ヌルポインタで初期化

    std::cout << ptr << std::endl; // ヌルポインタの値を出力

    ptr = nullptr;

    std::cout << ptr << std::endl;
}