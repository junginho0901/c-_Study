//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book
//{
//    string title;
//    int price, pages;
//
//public:
//    Book(string title = "", int price = 0, int pages = 0)
//    {
//        this->title = title;
//        this->price = price;
//        this->pages = pages;
//    }
//    void show()
//    {
//        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
//    }
//    string getTitle()
//    {
//        return title;
//    }
//    Book &operator+=(int a);
//    Book &operator-=(int a);
//    bool operator==(int a)
//    {
//        if (price == a)
//            return true;
//        else
//            return false;
//    }
//    bool operator==(string a)
//    {
//        if (title == a)
//            return true;
//        else
//            return false;
//    }
//    bool operator==(Book b)
//    {
//        if (b.price == price && b.title == title)
//            return true;
//        else
//            return false;
//    }
//};
//
//Book &Book::operator+=(int a)
//{
//    price += a;
//    return *this;
//}
//Book &Book::operator-=(int a)
//{
//    this->price -= a;
//    return *this;
//}
//int main(void)
//{
//    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//    if (a == 30000)
//        cout << "정가 30000원" << endl; // price 비교
//    if (a == "명품 C++")
//        cout << "명품 C++ 입니다." << endl; // 책 title 비교
//    if (a == b)
//        cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
//}