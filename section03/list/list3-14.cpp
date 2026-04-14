#include <iostream>

class Base
{
public:
    void foo();
};


void Base::foo()
{
    std::cout << "Base::foo() " << std::endl;
}

class Derived : public Base
{
public:
    using Base::foo; // 基底クラスのfoo()を呼び出せるようにする
    void foo(int i); // オーバーロード
};

void Derived::foo(int i)
{
    std::cout << "Deriverd::foo(" << i << ") " << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // Base::foo() が呼び出される
    derived.foo(42); // Derived::foo(int) が呼び出される
}