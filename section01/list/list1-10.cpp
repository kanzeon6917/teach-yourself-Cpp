#include <iostream>

int main()
{
    int a = 2;
    switch(a)
    {
        case 1: // Fall through
        case 2: // Fall through
        case 3:
            std::cout << "a is 1, 2, or 3" << std::endl;
            return 0;
    }
    std::cout << "残りの処理" << std::endl;        
}