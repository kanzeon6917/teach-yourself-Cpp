#include <iostream>

// 面積や周囲長といったものは、三角形や四角形、
// 円などで全て計算方法が違うので基底クラスで共通化できない

class Shape
{
public:
    virtual float area() const = 0; // 面積を求める純粋仮想関数
    virtual float perimeter() const = 0; // 周囲長を求める純粋仮想関数
};


// 純粋仮想関数は関数本体を持たないので、メンバー関数の定義はない
// 長方形を扱うクラス
class Rectangle : public Shape
{
    float height;
    float width;

public:
    explicit Rectangle(float height, float width);
    float area() const override; // 面積を求める関数
    float perimeter() const override; // 周囲長を求める関数
};

Rectangle::Rectangle(float height, float width)
    : height(height), width(width)
{
}

float Rectangle::area() const
{
    return height * width;
}

float Rectangle::perimeter() const
{
    return 2 * (height + width);
}

class Circle : public Shape
{
    float radius; // 半径
public:
    explicit Circle(float radius);
    float area() const override; // 面積を求める関数
    float perimeter() const override; // 周囲長を求める関数
};


Circle::Circle(float radius)
    : radius(radius)
{
}

float Circle::area() const
{
    return 3.14f * radius * radius;
}

float Circle::perimeter() const
{
    return 2 * 3.14f * radius;
}


int main()
{
    Rectangle rectangle(10.0f, 20.0f);
    Circle circle(5.0f);

    std::cout << "Rectangle area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle.perimeter() << std::endl;

    std::cout << "Circle area: " << circle.area() << std::endl;
    std::cout << "Circle perimeter: " << circle.perimeter() << std::endl;
}