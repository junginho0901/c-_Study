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

    string getTitle() { return title; }
    friend bool operator<(Book book1, Book book2);
}; // string b가 객체가 아님, 외부 함수 필요
bool operator<(Book book1, Book book2)
{
    if (book1.title < book2.title)
        return true;
    else
        return false;
}

int main(void)
{
    Book a("청춘", 2000, 300);
    string b;
    cout << "책 이름을 입력하세요>>";
    getline(cin, b); // 키보드로부터 문자열로 책 이름을 입력 받음
    if (b < a)
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}