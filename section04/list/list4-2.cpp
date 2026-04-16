#include <iostream>

std::string get_massage(); // 関数の前方宣言

int main()
{
    auto msg = get_massage(); // get_massage関数を呼び出してメッセージを取得

    std::cout << msg << std::endl; // 取得したメッセージを出力
}


// 関数の実際の定義
std::string get_massage()
{
    return "Hello, forward declaration!"; // メッセージを返す
}