#include <iostream>

struct S
{
    int x;
    int y;
};


union U
{
    S s;
};

int main()
{
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << "x: " << u.s.x << std::endl;
    std::cout << "y: " << u.s.y << std::endl;

    return 0;
}