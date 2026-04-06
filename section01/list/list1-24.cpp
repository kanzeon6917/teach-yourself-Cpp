#include <iostream>

int main()
{
    int i = 0; // ループカウンター。ループした回数を数える。
    while(i < 5)
    {
        std::cout << "Hello, World!" << std::endl; 
        i += 1;
    }
}