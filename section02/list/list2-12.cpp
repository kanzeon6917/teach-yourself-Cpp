#include <iostream>

// 値の1に型を推論し、その型を戻り値の型として使う
decltype(1) one()
{
    return 1;
}

int main()
{
    auto i = one();

    decltype(i) j;

    j = 42.195;

    std::cout << j << std::endl;
}