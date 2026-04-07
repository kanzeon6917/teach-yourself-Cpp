#include <iostream>

class product
{
    int id;
    int price;
    int stock;

public:
    int get_id();
    void set_id(int new_id);

    int get_price();
    void set_price(int new_price);

    int get_stock();
    void set_stock(int new_stock);

    void set_data(int new_id, int new_price, int new_stock)
    {
        set_id(new_id);
        set_price(new_price);
        set_stock(new_stock);
    }
};


int product::get_id()
{
    // メンバ関数の内側ではメンバ変数に直接アクセスできる
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int product::get_price()
{
    return price;
}

void product::set_price(int new_price)
{
    // Setter関数内で価格の妥当性をチェックする
    if (new_price < 0)
    {
        std::cout << "価格は0以上でなければなりません。" << std::endl;
        return;
    }
    price = new_price;
}

int product::get_stock()
{
    return stock;
}

void product::set_stock(int new_stock)
{
    if (new_stock < 0)
    {
        std::cout << "在庫数は0以上でなければなりません。" << std::endl;
        return;
    }
    stock = new_stock;
}


int main()
{
    product pen;

    // メンバ変数は非公開なので、setter関数を通じて値を設定する
    pen.set_data(0, 100, 200);

    product* ptr = &pen; // インスタンスへのポインタ

    // アロー演算子を使ってgetter関数を呼び出す
    std::cout << "商品ID: " << ptr->get_id() << std::endl;
    std::cout << "価格: " << ptr->get_price() << std::endl;
    std::cout << "在庫数: " << ptr->get_stock() << std::endl;
}

