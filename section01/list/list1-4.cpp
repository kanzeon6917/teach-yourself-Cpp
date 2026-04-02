#include <iostream>

int main()
{
    int i = 42;

    std::cout << "++i: " << ++i << std::endl; // 前置インクリメント
    std::cout << "i: " << i << std::endl;   // iの値を表示
    std::cout << "i++: " << i++ << std::endl; // 後置インクリメント
    std::cout << "i: " << i << std::endl;   // i
}