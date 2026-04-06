#include <iostream>

int main()
{
    int array[10] = {};

    std::size_t size = sizeof(array) / sizeof(array[0]);
    std::cout << "array[" << size << "]" << std::endl;
}