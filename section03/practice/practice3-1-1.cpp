#include <iostream>

class A
{
    int v;

public:
    void set(int value);
    int get() const;
};


void A::set(int value)
{
    v = value;
}

int A::get() const
{
    return v;
}

int main()
{
    A a;
    a.set(42);

    const A& ca = a;
    std::cout << ca.get() << std::endl; // エラー: const参照から非constメンバー関数を呼び出せない
}