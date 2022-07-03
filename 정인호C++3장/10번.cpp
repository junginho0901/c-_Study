//#include<iostream>
//using namespace std;
//class Add {
//	int x, y;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Sub {
//	int x, y;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Mul {
//	int x, y;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//class Div {
//	int x, y;
//public:
//	void setValue(int x, int y);
//	int calculate();
//};
//
//void Add::setValue(int x, int y) {
//	this->x = x;
//	this-> y = y;
//}
//int Add::calculate() {
//	return x + y;
//}
//
//void Sub::setValue(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//int Sub::calculate() {
//	return x - y;
//}
//
//void Mul::setValue(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//int Mul::calculate() {
//	return x * y;
//}
//
//void Div::setValue(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//int Div::calculate() {
//	return x / y;
//}
//
//
//int main(void) {
//
//	Add a;
//	Sub s;
//	Mul m;
//	Div d;
//
//	int num1, num2;
//	char oper;
//
//	while (true) {
//		cout << "두 정수와 연산자를 입력하세요>>";
//		cin >> num1 >> num2 >> oper;
//		switch (oper) {
//		case '+':
//			a.setValue(num1, num2);
//			cout << a.calculate() << endl;
//			break;
//		case '-':
//			s.setValue(num1, num2);
//			cout << s.calculate() << endl;
//			break;
//		case '*':
//			m.setValue(num1, num2);
//			cout << m.calculate() << endl;
//			break;
//		case '/':
//			d.setValue(num1, num2);
//			cout << d.calculate() << endl;
//			break;
//		}
//	}
//
//	return 0;
//}