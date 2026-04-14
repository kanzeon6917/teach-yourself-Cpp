#include <iostream>

class Base
{
public:
    virtual void foo(); // 仮想関数
};

void Base::foo() // 定義にはvirtualは不要
{
    std::cout << "Base::foo() " << std::endl;
}

class Derived : public Base
{
public:
    void foo() override; // オーバーライドすることを明示
    // void foo(int i) override; // エラー: シグネチャが異なるためオーバーライドできない
    void foo(int i); // オーバーロード
};

void Derived::foo() // オーバーライド
{
    std::cout << "Derived::foo() " << std::endl;
}

void Derived::foo(int i) // オーバーロード
{
    std::cout << "Derived::foo(int) " << i << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // Derived::foo() が呼び出される
    derived.foo(42); // Derived::foo(int) が呼び出される
}