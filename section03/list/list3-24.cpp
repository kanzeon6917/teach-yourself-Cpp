#include <iostream>

class S
{
    static int count; // インスタンスの数をカウントする静的メンバ変数

public:
    S();
    ~S();

    static void show_count(); // インスタンスの数を表示するメンバ関数
};


int S::count = 0; // 静的メンバ変数の定義と初期化

S::S()
{
    ++count; // インスタンスが生成されるたびにカウントを増やす
}

S::~S()
{
    --count; // インスタンスが破棄されるたびにカウントを減らす
}

void S::show_count()
{
    std::cout << "S::count: " << count << std::endl; // 現在のインスタンスの数を表示
}

int main()
{
    // どのインスタンスにも結びつかないのでインスタンスがなくても呼ぶことができる
    S::show_count(); // インスタンスの数を表示

    S a; // インスタンスaを生成

    a.show_count(); // インスタンスaの数を表示
}