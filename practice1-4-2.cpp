#include <iostream>

int main()
{
    int a = 4;
    switch (a + 1)
    {
    case 1:
        std::cout << "a + 1 is 1" << std::endl;
        break;
        
    case 2:
        std::cout << "a + 1 is 2" << std::endl;
        break;
    
    // default:
    //     std::cout << "a + 1 is not 1 or 2 or 3" << std::endl;
    //     break;
    
    case 3:
        std::cout << "a + 1 is 3" << std::endl;
        break;
    }
}