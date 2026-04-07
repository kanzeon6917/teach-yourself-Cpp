#include <iostream>

union U
{
    int a;
    int b;
    int c;
};


int main()
{
    U u = {42};

    // u.a と　u.bは同じ場所にあるのでu.bの値は、u.aの値と同じになります。
    std::cout << "u.bの値は" << u.b << std::endl;

    u.c = 1024;
    std::cout << "u.aの値は" << u.a << std::endl;

}