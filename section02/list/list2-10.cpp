#include <iostream>

int one()
{
    return 1;
}

int main()
{
    auto d = 3.14;

    d = 2.71f;

    std::cout << d << std::endl;

    // 型推論は関数の呼び出しや数値計算などの式の結果からも行える
    auto i = one();

    i = 42.195;

    std::cout << i << std::endl;
}