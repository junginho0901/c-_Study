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
//   friend bool operator==(Book a,int b);
//   friend bool operator==(Book a,string b);
//   friend bool operator==(Book a,Book b);
//};
//  bool operator==(Book a,int b)
//    {
//        if (a.price == b)
//            return true;
//        else
//            return false;
//    }
//    bool operator==(Book  a,string b)
//    {
//        if (a.title == b)
//            return true;
//        else
//            return false;
//    }
//    bool operator==(Book a,Book b)
//    {
//        if (a.price == b.price && a.title == b.title)
//            return true;
//        else
//            return false;
//    }
//Book &Book::operator+=(int a)
//{
//    price += a;
//    return *this;
//}
//Book& Book::operator-=(int a)
//{
//    this->price -= a;
//    return *this;
//}
//int main(void)
//{
//    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//    if (a == 30000)
//        cout << "정가 30000원" << endl;
//    if (a == "명품 C++")
//        cout << "명품 C++ 입니다." << endl; 
//    if (a == b)
//        cout << "두 책이 같은 책입니다." << endl; 
//}