#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
    return; // ここに到達した時点で呼び出しもとに戻る

    // 以降のコードは実行されない
    std::cout << "この行は実行されない" << std::endl;
}

int add(int a, int b)
{
    return a + b; // aとbを足した結果を呼び出しもとに返す
}

int main()
{
    int x = add(3, 5); // add関数を呼び出して、3と5を足した結果をxに代入する
    show_value(x); // xの値を表示する関数を呼び出す
}