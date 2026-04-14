#include <iostream>

class Base // 基底クラス
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "foo() " << std::endl;
}

class Derived : public Base // 派生クラス
{
public:
    void bar(); // 派生クラスで追加した機能
};

void Derived::bar()
{
    std::cout << "bar() " << std::endl;
}

int main()
{
    Base base;
    base.foo(); // 基底クラスの機能を呼び出す
    // base.bar(); // エラー: 基底クラスにはbar()がない

    Derived derived;
    derived.foo(); // 派生クラスは基底クラスの機能も
    derived.bar(); // 派生クラスの機能を呼び出す
}