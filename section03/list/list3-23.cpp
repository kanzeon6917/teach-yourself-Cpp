#include <iostream>

class S
{
    static int count; // インスタンスの数を数えるstaticなメンバ変数

public:
    S();
    ~S();

    void show_count() const; // インスタンスの数を表示するメンバ関数
};


int S::count = 0; // staticなメンバ変数の定義と初期化

S::S()
{
    ++count; // インスタンスが生成されるたびにカウントを増やす
}

S::~S()
{
    --count; // インスタンスが破棄されるたびにカウントを減らす
}

void S::show_count() const
{
    std::cout << "S::count: " << count << std::endl; // 現在のインスタンスの数を表示
}


void function()
{
    S a;
    a.show_count(); // インスタンスaの数を表示

    // この関数が終了すると、インスタンスaは破棄されるため、カウントは減る
}

int main()
{
    S a;
    a.show_count(); // インスタンスaの数を表示
    function(); // function内でインスタンスが生成され、終了時に破棄される
    a.show_count(); // function終了後のインスタンスaの数を表示
}
