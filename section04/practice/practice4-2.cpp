#include <iostream>

int sum(int a, int b); // 関数の前方宣言

int main()
{
    sum(10, 5); // sum関数を呼び出す
}

int sum(int a, int b) // sum関数の定義
{
    return a + b; // aとbの合計を返す
}