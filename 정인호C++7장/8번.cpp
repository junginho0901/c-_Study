//#include<iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	void show() { cout << "radius" << radius << "�� ��" << endl; }
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
//	++a; // �������� 1 ���� ��Ų��. 
//	b = a++; // �������� 1 ���� ��Ų��. 
//	a.show();
//	b.show();
//}
