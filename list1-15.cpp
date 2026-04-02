#include<iostream>

int main()
{
    int* ptr = nullptr; // ポインタをnullptrで初期化

    if(ptr == nullptr)
    {
        std::cout << "ptr is nullptr" << std::endl;
    }
    else
    {
        std::cout << "ptr is not nullptr" << std::endl;
    }
}