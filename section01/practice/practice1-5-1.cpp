#include <iostream>

void show_value(float f)
{
    std::cout << f << std::endl;
}

int main()
{
    float f = 42.195;
    show_value(f);
}