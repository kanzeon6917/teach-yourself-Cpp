#include <iostream>

int main()
{
    // このソースファイルファイル名を出力
    std::cout << "__FILE__: " << __FILE__ << std::endl;

    // このソースファイルの行番号を出力
    std::cout << "__LINE__: " << __LINE__ << std::endl;

    // この関数の関数名を出力
    std::cout << "__func__: " << __func__ << std::endl;

    // 参照しているC++の言語標準バージョンを出力
    std::cout << "__cplusplus: " << __cplusplus << std::endl;

    int line = __LINE__; // 現在の行番号を変数lineに代入

    // lineは現在の行番号ではなく、変数に格納された時に行番号が表示されることに注意
    std::cout << "line: " << line << "__LINE__: " << __LINE__ << std::endl; // lineの値と現在の行番号を表示
}