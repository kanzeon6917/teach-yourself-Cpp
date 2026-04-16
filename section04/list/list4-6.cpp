#include <iostream>

class A
{
public:
    A();
    ~A();
};

A::A()
{
    std::cout << "コンストラクタが呼び出されました" << std::endl; // コンストラクタが呼び出されたときにメッセージを表示
}

A::~A()
{
    std::cout << "デストラクタが呼び出されました" << std::endl; // デストラクタが呼び出されたときにメッセージを表示
}

A a; // グローバルスコープでインスタンスaを生成

int main()
{
    std::cout << "main()関数の開始" << std::endl; // main関数の開始のメッセージを表示
}