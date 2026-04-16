#include <iostream>

int main()
{
    int i = 72; // 異なるスコープでは同じ名前のローカル変数を作ることができる

    // 現在のスコープから順番に遡って最も内側にある変数が使われる
    {
        int i = 72;

        std::cout << "inner scope: " << &i << ": " << i << std::endl; // 内側のスコープのiのアドレスと値を表示

        i = 0;
    }

    std::cout << "outer scope: " << &i << ": " << i << std::endl; // 外側のスコープのiのアドレスと値を表示
}