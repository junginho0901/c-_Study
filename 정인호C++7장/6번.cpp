#include<iostream>
#include<string>
using namespace std;
class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	Matrix operator+(Matrix a) {
		Matrix tmp;
		tmp.a =this->a+ a.a;
		tmp.b = this->b + a.b;
		tmp.c = this->c + a.c;
		tmp.d = this->d + a.d;

		return tmp;
	}
	Matrix& operator+= (Matrix a) {
		this->a += a.a;
		this->b += a.b;
		this->c += a.c;
		this->d += a.d;
		return *this;

	}
	bool operator == (Matrix a) {
		if (a.a == this->a&&
			a.b == this->b&&
			a.c == this->c&&
			a.d == this->d)
		{
			return true;
		}
		else 
			return false;

	}
	void show() {
		cout << "(" << a << "," << b << "," << c << "," << d << ")" << endl;
	}

};
int main() {
	Matrix a(1, 2, 3, 4 ), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
	{
		cout << "a and c are the same" << endl;
	}
}