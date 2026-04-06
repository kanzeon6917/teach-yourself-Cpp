#include <string>
#include <iostream>

int main()
{
    std::string c = "Hello, message";
    
    for (int i = 0; i < c.size(); ++i)
    {
        std::cout << c[i] << std::endl;
    }
}