#include <iostream>

// 何も引数を受け取らず、何も戻り値を返さない関数
void hello_world()
{
    std::cout << "Hello, World!" << std::endl;
}

// aとbの２つを引数として受け取り、それらを足した結果を表示する関数
void show_sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    hello_world(); // "Hello, World!" を出力する関数を呼び出す
    show_sum(3, 5); // 3と5を足した結果を表示する関数を呼び出す
}