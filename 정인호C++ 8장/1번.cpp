#include<iostream>
#include<string>
class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	int getRatius() {
		return radius;
	}

	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
};

class NamedCircle :public Circle{
public:
	NamedCircle(int radius, string name) {

	}
};
int main(void) {
	
}