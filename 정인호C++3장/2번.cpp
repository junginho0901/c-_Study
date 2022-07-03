//#include <iostream>
//#include<cstring>
//#include<string>
//
//using namespace std;
//
//
//class Date {
//private:
//	int year;
//	int month;
//	int day;
//	
//public:
//	Date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//
//
//	Date(string strDate);
//	void show();
//	int getYear();
//	int getMonth();
//	int getDay();
//};
//
//Date::Date(string date)
//{
//	int ind;
//
//	this->year = stoi(date);
//
//	ind = date.find('/');
//	this->month = stoi(date.substr(ind + 1));
//
//	ind = date.find('/', ind + 1);
//	this->day = stoi(date.substr(ind + 1));
//}
//
//void Date::show() {
//	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
//}
//
//int Date::getYear() {
//	return year;
//}
//
//int Date::getMonth() {
//	return month;
//}
//
//int Date::getDay() {
//	return day;
//}
//int main() {
//	Date birth(2014, 3, 20);
//	Date independenceDay("1945/8/20");
//	independenceDay.show();
//	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
//}