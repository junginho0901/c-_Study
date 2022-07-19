//#include<iostream>
//#include<string>
//using namespace std;
//class Matrix {
//	int a, b, c, d;
//public:
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
//		this->a = a;
//		this->b = b;
//		this->c = c;
//		this->d = d;
//	}
//	friend Matrix operator +(Matrix a, Matrix b);
//	friend Matrix& operator += (Matrix& a, Matrix b);
//	friend bool operator == (Matrix a, Matrix b);
//	void show() {
//		cout << "(" << a << "," << b << "," << c << "," << d << ")" << endl;
//	}
//};
//Matrix operator + (Matrix a, Matrix b) {
//	Matrix tmp;
//
//	tmp.a = a.a + b.a;
//	tmp.b = a.b + b.b;
//	tmp.c = a.c + b.c;
//	tmp.d = a.d + b.d;
//	return tmp;
//}
//Matrix& operator += (Matrix& a, Matrix b) {
//	a.a += b.a;
//	a.b += b.b;
//	a.c += b.c;
//	a.d += b.d;
//	return a;
//}
//
//bool operator == (Matrix a, Matrix b) {
//	if (a.a == b.a&&
//		a.b == b.b&&
//		a.c == b.c&&
//		a.d == b.d)
//	{
//		return true;
//	}
//	else
//		return false;
//
//}
//
//
//int main() {
//	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
//	c = a + b;
//	a += b;
//	a.show();
//	b.show();
//	c.show();
//	if (a == c)
//	{
//		cout << "a and c are the same" << endl;
//	}
//}