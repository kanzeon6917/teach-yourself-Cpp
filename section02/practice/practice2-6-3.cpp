#include <iostream>

int main()
{
    std::cout << "空白行でEnterを押すまで出力します" << std::endl;
    do
    {
        std::string str;
        std::getline(std::cin, str);
        if (str.empty())
        {
            break;
        }
        std::cout << "入力された文字列: " << str << std::endl;
    } while (true);

    std::cout << "終了します" << std::endl;
}