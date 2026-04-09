#include <iostream>

int main()
{
    int i;
    std::cout << "整数を入力してください> "; // 改行しない

    std::cin >> i; // 入力を受け取る

    std::cout << "入力された整数は\" " << i << " \" です。" << std::endl;
}