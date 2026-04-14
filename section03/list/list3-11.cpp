#include <iostream>

class Book
{
    std::string title = "";
    int page = 0;

public:
    Book();
    explicit Book(std::string title, int page);

    void show() const;
};


// Pagはメンバー初期化リストで省略したのでNSDMIのデフォルト値を使って初期化される
Book::Book()
    :title("untitled")
{
}

// メンバー初期化リストで与えられた初期値が使われる
Book::Book(std::string title, int page)
    :title(title), page(page)
{
}

void Book::show() const
{
    std::cout << title << " (" << page << " pages)" << std::endl;
}

int main()
{
    Book nsdmi; // NSDMI
    nsdmi.show();

    Book old_edition{"独習C++ 第4版", 568}; // メンバー初期化リスト
    old_edition.show();
}