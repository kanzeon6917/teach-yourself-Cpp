#include <iostream>

struct vector2d
{
    float x;
    float y;
};

int sub(int left, int right)
{
    return left - right;
}

vector2d sub(vector2d left, vector2d right)
{
    vector2d result;
    result.x = left.x - right.x;
    result.y = left.y - right.y;
    return result;
}

int main()
{
    std::cout << sub(10, 20) << std::endl;

    vector2d a = {120, 30};
    vector2d b = {5, 10};

    auto v = sub(a, b);
    std::cout << v.x << ", " << v.y << std::endl;
}