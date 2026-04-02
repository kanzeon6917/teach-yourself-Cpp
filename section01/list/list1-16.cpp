#include <iostream>

int main()
{
    float f = -1234.5678f;
    std::cout << f << std::endl;

    int i = f; // 浮動小数点数を整数に変換
    std::cout << i << std::endl; // 小数点以下が切り

    unsigned int u = i; // 整数を符号なし整数に変換

    std::cout << u << std::endl; // intからunsigned intへの暗黙の型変換

    unsigned short s = u; // 符号なし整数を符号なし短整数に変換
    std::cout << s << std::endl; // unsigned intからunsigned shortへの暗

    u = s;

    std::cout << u << std::endl; // unsigned shortからunsigned intへの暗黙の型変換

    f = u; // 符号なし整数を浮動小数点数に変換

    std::cout << f << std::endl; // unsigned intからfloatへの暗黙の型変換
}