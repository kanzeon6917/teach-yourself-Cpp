#include <iostream>

class A
{
    union //型名がない無名共用体
    {
        int i;
        float f;
    };

    long l;

public:
    A();

    int get_i() const;
    void set_f(float f);
    long get_l() const;
};

A::A() : i(0xdeadbeef), l(0xc0ffee) // 共用体の先頭のメンバ変数で初期化する
{
    // メンバーのアドレスを列挙
    std::cout << "&i: " << &i << std::endl;
    std::cout << "&f: " << &f << std::endl;
    std::cout << "&l: " << &l << std::endl;
}


int A::get_i() const
{
    return i;
}

void A::set_f(float f)
{
    this->f = f;
}

long A::get_l() const
{
    return l;
}

int main()
{
    A a;
    std::cout << "i: " << std::hex << a.get_i() << std::endl; // iは0で初期化される
    a.set_f(2.71828f); // fを設定するとiの値も変わる
    std::cout << "i: " << std::hex << a.get_i() << std::endl;
    std::cout << "l: " << std::hex << a.get_l() << std::endl; // lは0で初期化される
}

