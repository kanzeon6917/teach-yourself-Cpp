#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "文字列を入力してください> "; // 改行しない

    std::getline(std::cin, s); // 入力を受け取る

    std::cout << s << std::endl;
}