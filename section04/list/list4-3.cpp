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

void function_scope(int i)
{
    A a;

    std::cout << "関数スコープ" << std::endl; // 関数スコープ内でのメッセージを表示

    if (i > 0)
    {
        return; // 関数を途中で終了する
    }

    std::cout << "if文のあと" << std::endl; // 関数スコープ終了時のメッセージを表示
}


int main()
{
    function_scope(10);

    std::cout << std::endl; // 改行を出力

    function_scope(-10);
}