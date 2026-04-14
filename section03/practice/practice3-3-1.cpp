#include <iostream>
#include <string>

class Book
{
    std::string title;
    std::string writer;
    int price;

public:
    Book(std::string title, std::string writer, int price);
    std::string getTitle() const;
    std::string getWriter() const;
    int getPrice() const;
};

Book::Book(std::string title, std::string writer, int price)
    : title(title), writer(writer), price(price)
{
}

std::string Book::getTitle() const
{
    return title;
}

std::string Book::getWriter() const
{
    return writer;
}

int Book::getPrice() const
{
    return price;
}

int main()
{
    Book book("C++ Programming", "John Doe", 29);
    std::cout << "Book created successfully!" << std::endl;
    std::cout << book.getTitle() << " by " << book.getWriter() << " costs $" << book.getPrice() << std::endl;
}