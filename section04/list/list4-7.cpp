#include <iostream>

int count()
{
    static int counter = 0;
    return ++counter; // counterをインクリメントしてから返す
}

int main()
{
    std::cout << count() << std::endl; // 1を出力
    std::cout << count() << std::endl; // 2を出力
    std::cout << count() << std::endl; // 3を出力
}