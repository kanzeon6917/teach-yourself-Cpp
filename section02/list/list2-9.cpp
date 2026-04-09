#include <iostream>

int main()
{
    int value = 42; // int型の変数
    int other = 0; // 別の変数

    int* pointer = &value; // valueのアドレスをpointerに代入
    int& reference = value; // valueへの参照をreferenceに代入
    
    std::cout << "Valueのアドレスは" << &value << "で、値は" << value << "です。" << std::endl;
    std::cout << "Otherのアドレスは" << &other << "で、値は" << other << "です。" << std::endl;
    std::cout << "Pointerの持つアドレスは" << pointer << "で、指し示す値は" << *pointer << "です。" << std::endl;
    std::cout << "Referenceのアドレスは" << &reference << "で、値は" << reference << "です。" << std::endl;

    pointer = &other; 
    reference = other;

    std::cout << std::endl;

    std::cout << "Valueのアドレスは" << &value << "で、値は" << value << "です。" << std::endl;
    std::cout << "Otherのアドレスは" << &other << "で、値は" << other << "です。" << std::endl;
    std::cout << "Pointerの持つアドレスは" << pointer << "で、指し示す値は" << *pointer << "です。" << std::endl;
    std::cout << "Referenceのアドレスは" << &reference << "で、値は" << reference << "です。" << std::endl;
}