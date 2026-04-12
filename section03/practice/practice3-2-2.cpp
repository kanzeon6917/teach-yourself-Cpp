#include <iostream>

class class_content
{
public:
    class_content();
    ~class_content();
};

class_content::class_content()
{
    std::cout << "コンストラクタが呼び出されました" << std::endl;
}

class_content::~class_content()
{
    std::cout << "デストラクタが呼び出されました" << std::endl;
}

int main()
{
    class_content content; // コンストラクタが呼び出される

    std::cout << "main関数の終わりに到達しました" << std::endl;
}