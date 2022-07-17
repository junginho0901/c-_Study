#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0)
    {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show()
    {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle()
    {
        return title;
    }
    Book &operator+=(int a);
    Book &operator-=(int a);
    bool operator==(int a)
    {
        if (price == a)
            return true;
        else
            return false;
    }
    bool operator==(string a)
    {
        if (title == a)
            return true;
        else
            return false;
    }
    bool operator==(Book b)
    {
        if (b.price == price && b.title == title)
            return true;
        else
            return false;
    }
    bool operator!(){
        if(price==0){
            return true;
        }
        else return false;
    }
};

Book &Book::operator+=(int a)
{
    price += a;
    return *this;
}
Book &Book::operator-=(int a)
{
    this->price -= a;
    return *this;
}
int main(void)
{
    Book book("벼룩시장" , 0 , 50); // 가격은 0 
    if(!book) cout << "공짜다" << endl;
}