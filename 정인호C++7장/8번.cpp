//#include<iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	void show() { cout << "radius" << radius << "인 원" << endl; }
//	
//	friend Circle& operator ++(Circle& a);
//	friend Circle operator ++(Circle& a, int x);
//};
//
//Circle& operator ++(Circle& a) {
//	a.radius++;
//	return a;
//}
//Circle operator ++(Circle& a,int x) {
//	Circle tmp;
//	tmp=a.radius+1;
//	return tmp;
//}
//
//int main() {
//	Circle a(5), b(4);
//	++a; // 반지름을 1 증가 시킨다. 
//	b = a++; // 반지름을 1 증가 시킨다. 
//	a.show();
//	b.show();
//}
