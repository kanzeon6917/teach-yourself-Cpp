#include <iostream>

int* dangling_pointer()
{
    int i = 10; // ローカル変数iを定義
    return &i; // iのアドレスを返す（危険な操作）
}

int main()
{
    int* p = dangling_pointer(); // 関数から返されたポインタを受け取る

    std::cout << *p << std::endl; // ダングリングポインタを使って値を出力（未定義動作の可能性あり）
}