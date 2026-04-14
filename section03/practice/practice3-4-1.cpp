#include <iostream>

class vector3d
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
public:
    vector3d();
    void show() const;
};

vector3d::vector3d()
{
    // NSDMIで初期化される
}

void vector3d::show() const
{
    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
}

int main()
{
    vector3d v; // NSDMI
    v.show();
}