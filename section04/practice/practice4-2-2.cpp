#include <iostream>

class A
{
    int m_v;
public:
    explicit A(int v): m_v(v){} // コンストラクタでm_vを初期化

    int v() const{
        return m_v;
    }
};

int main()
{
    A a(10); // Aクラスのインスタンスaを作成し、m_vを10で初期化
    std::cout << a.v() << std::endl; // aのv()メンバ関数を呼び出してm_vの値を出力
}