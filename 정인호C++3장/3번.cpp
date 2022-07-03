//#include<iostream>
//using namespace std;
//class Account {
//private:
//	int money;
//	int id;
//	string name;
//public:
//	Account(string name, int id, int money);
//	void deposit(int money);
//	int getOwner();
//	int inquiry();
//	void withdraw(int money);
//};
//
//Account::Account(string name, int id,int money )
//{
//	this->name = name;
//	this->money = money;
//	this->id = id;
//
//}
//int Account::getOwner()
//{
//	return id;
//}
//int Account::inquiry()
//{
//	return money;
//}
//void   Account::deposit(int money) {
//	this->money += money;
//}
//void   Account::withdraw(int money) {
//	this->money -= money;
//}
//int main(void) {
//	Account a("kitae", 1, 5000);
//	a.deposit(50000);
//	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
//	a.withdraw(20000);
//	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
//	return 0;
//}