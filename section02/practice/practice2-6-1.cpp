#include <iostream>

int main()
{
    double d;
    std::cout << "実数を入力してください> "; // 改行しない
    std::cin >> d; // 入力を受け取る
    std::cout << "入力された実数は\" " << d << " \" です。" << std::endl;
}