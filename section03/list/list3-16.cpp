#include <iostream>

class A
{
public:
    void foo();
};

void A::foo()
{
    std::cout << "A::foo() " << std::endl;
}

void call_foo(A* pa)
{
    pa->foo(); // ポインタを使ってメンバにアクセス
    // (*pa).foo(); // これも同じ意味
}

int main()
{
    A a;
    call_foo(&a); // ポインタを渡す
}