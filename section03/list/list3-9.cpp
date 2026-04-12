#include <iostream>

class A
{
    int m_v;

public:
    explicit A(int); // explicitを付けると暗黙の型変換が禁止される
    int v() const;
};

A::A(int v) : m_v(v) // 定義にはexplicitは必要ない
{
}

int A::v() const
{
    return m_v;
}

int main()
{
    A x = 0; // エラー。暗黙のコンストラクタ呼び出しは禁止されている

    A y(42); // OK。明示的なコンストラクタ呼び出しは許されている

    y.v() == 42; // true
}