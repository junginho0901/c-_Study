////#define _CRT_SECURE_NO_WARNINGS
////#include<iostream>	
////#include<cstring>
////
////using namespace std;
////
////class Book {
////	char *title;
////	int price;
////public:
////	Book(const Book& b)
////	{
////		int n=strlen(b.title);
////		this->title = new char[n + 1];
////		strcpy(this->title, b.title);
////		this->price = b.price;
////	}
////	Book(const char* title, int price);
////	~Book();
////	void set(const char* title, int price);
////	void show() { cout << title << ' ' << price << "원" << endl; }
////};
////Book::Book(const char* title, int price) {
////	int len = strlen(title);
////	this->title = new char[len+1];
////	strcpy(this->title, title);
////	this->price = price;
////}
////
////Book::~Book() {
////	
////		delete[] this->title;
////	
////}
////void Book::set(const char* title, int price) {
////	if (this->title!=nullptr)
////	{
////		delete[] this->title;
////	}
////	
////	int len = strlen(title);
////	this->title = new char[len+1];
////	strcpy(this->title, title);
////	this->price = price;
////}
////int main() {
////	Book cpp("명품C++", 10000);
////	Book java = cpp;
////	java.set("명품자바", 12000);
////	cpp.show();
////	java.show();
////
////	return 0;
////}
////
//
//#include<iostream>	
//#include<string>
//using namespace std;
//
//class Book {
//	string title;
//	int price;
//public:
//	Book(const Book& b)
//	{
//		this->title =b.title;
//		this->price =b.price;
//	}
//	Book(const string title, int price);
//	void set(const string title, int price);
//	void show();
//};
//void Book::show() {
//	cout << this->title << ' ' << this->price << "원" << endl;
//}
//Book::Book(const string title, int price) {
//	this->title = title;
//	this->price = price;
//}
//
//void Book::set(string title, int price) {
//	this->title = title;
//	this->price = price;
//	
//}
//int main() {
//	Book cpp("명품C++", 10000);
//	Book java = cpp;
//	java.set("명품자바", 12000);
//	cpp.show();
//	java.show();
//
//	return 0;
//}
//
