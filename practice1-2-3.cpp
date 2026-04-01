#include <iostream>

void show_message()
{
    std::cout << "hello, world!" << std::endl;

    return;

    // 上記でreturnsiた後のコードは実行されない
    std::cout << "hello, return!" << std::endl;
}

int main()
{
    show_message();
}