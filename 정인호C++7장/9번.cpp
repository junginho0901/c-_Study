//#include<iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	void show() { cout << "radius" << radius << "ÀÎ ¿ø" << endl; }
//	friend Circle operator +(int x, Circle& a);
//};
//Circle operator + (int x, Circle& a) {
//	Circle tmp;
//	tmp.radius = a.radius + x;
//	return tmp;
//}
//
//int main(void)
//{
//	Circle a(5), b(4);
//	b = 1 + a;
//	a.show();
//	b.show();
//}
