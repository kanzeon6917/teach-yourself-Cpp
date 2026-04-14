#include <iostream>

class S
{
public:
    static int num; // staticメンバ変数の宣言
};


int S::num = 123;

int main()
{
    std::cout << S::num << std::endl; // クラス名を使ってアクセスできる

    S::num = 456; // クラス名を使ってアクセスできる

    S s;

    std::cout << s.num << std::endl; // オブジェクトを使ってアクセスできる
}