#include <iostream>

union U
{
    // デフォルトのアクセス指定子はpublic
    float f;

private:
    int i;

public:
    U(); // コンストラクタやデストラクタも定義できる

    int get_i() const;
};

// コンストラクタでは先頭以外のメンバ変数で初期化できる
U::U() : i(0xdeadbeef)
{
    // メンバーのアドレスを列挙
    std::cout << "&f: " << &f << std::endl;
    std::cout << "&i: " << &i << std::endl;
}

int U::get_i() const
{
    return this->i; // 共用体のメンバ関数もthisが使える
}

int main()
{
    U u; // デフォルトのコンストラクターがint型で初期化する
    std::cout << std::hex << u.get_i() << std::endl; // 0xdeadbeefと表示される
    u.f = 3.14f; // 共用体のメンバ変数は同じアドレスを共有しているため、iの値も変わる
    std::cout << std::hex << u.get_i() << std::endl;
}