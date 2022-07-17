#include<iostream>
using namespace std;
#include<string>
class Circle {
	int radius;
public:
	Circle() {};
	Circle(int radius);
	double get();
};

Circle::Circle(int radius) {
	this->radius = radius;
}
double Circle::get()
{
	return radius * radius*3.14;
}
void swap(Circle& a, Circle& b) {
	Circle c;
	c = a;
	a = b;
	b = c;
}

int main(void) {
	Circle a(10), b(12);
	cout << a.get() << " " << b.get();
	swap(a, b);
	cout << a.get() << " " << b.get();
}