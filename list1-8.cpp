#include <iostream>

void show_message(int value)
{
    if(10 <= value && value <= 20)
    {
        std::cout << "value is between 10 and 20" << std::endl;
    }
    else
    {
        std::cout << "value is not between 10 and 20" << std::endl;
    }
}

int main()
{
    show_message(9);
    show_message(15);
    show_message(20);
}
