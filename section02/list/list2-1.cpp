#include <iostream>

struct product
{
    int id; // 商品ID
    int price; // 単価
    int stock; // 在庫数
};


int main()
{
    product pen;

    pen.id = 0;
    pen.price = 120;
    pen.stock = 200;

    product* ptr = &pen;

    // アロー演算子を使ってメンバ変数を取得する
    std::cout << "商品ID: " << ptr->id << std::endl;
    std::cout << "単価: " << ptr->price << std::endl;
    std::cout << "在庫数: " << ptr->stock << std::endl;
}