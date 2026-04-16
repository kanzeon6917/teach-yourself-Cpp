#include <iostream>

class A
{
public:
    ~A();
};

A::~A()
{
    std::cout << "デストラクタが呼び出されました" << std::endl; // デストラクタが呼び出されたときにメッセージを表示
}


int main()
{
    if(true)
    {
        std::cout << "if文" << std::endl; // if文内でのメッセージを表示
        A a; // if文内でインスタンスaを生成
    }

    std::cout << std::endl; // 改行を出力

    for (int i=0; i < 5; ++i)
    {
        std::cout << "for(" << i << ")" << std::endl; // for文内でのメッセージを表示
        A a; // for文内でインスタンスaを生成
    }

    std::cout << std::endl; // 改行を出力

    {
        std::cout << "ブロックスコープ" << std::endl; // ブロックスコープ内でのメッセージを表示
        A a; // ブロックスコープ内でインスタンスaを生成
    }

    std::cout << std::endl; // 改行を出力

    std::cout << "main()関数の最後" << std::endl; // main関数の最後のメッセージを表示
}