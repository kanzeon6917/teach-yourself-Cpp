#include <iostream>

int main()
{
    float f = 100.001f;
    f -= 100;
    std::cout << f << std::endl; // 100.001から100を引いた結果を表示
}