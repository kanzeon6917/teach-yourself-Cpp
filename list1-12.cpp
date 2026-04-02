#include <iostream>

void nochange(int i)
{
    // 仮引数を変更するが、呼び出した変数自体は変更されない
    i = 42;
}

void set42(int* pi)
{
    // ポインタを通して呼び出した変数を変更する
    *pi = 42;
}

int main()
{
    int i = 0;
    nochange(i);
    std::cout << "i = " << i << std::endl; // iは変更されない
    
    set42(&i);
    std::cout << "i = " << i << std::endl; // iは変更される
}