#include<iostream>
#include<string>
using namespace std;
class MyCar {
	int fuel;
	bool power;
public:
	MyCar();
	MyCar(int n);
	void go();
	void oiling(int n);
	void fuel_check();
	~MyCar();
};

MyCar::MyCar() {
	this->fuel = 100;
	this->power = true;
}
//생성자 다중 정의
MyCar::MyCar(int n) {
	this->fuel = n;
	this->power = true;
}
//소멸자(다중 정의 불가능)
MyCar::~MyCar() {
	std::cout << "소멸되었습니다." << std::endl;
}
void MyCar::go() {
	fuel -= 10;
}
void MyCar::oiling(int n)
{
	fuel += n;
}
void MyCar::fuel_check() {
	cout << "남은 기름량은 " << fuel << "L입니다." << endl;


}

void main() {
	MyCar car = MyCar(); //MySuv 객체 생성

						 //메서드 호출
	car.oiling(100);
	car.fuel_check();
	for (int i = 0; i < 10; i++)
	{
		car.go();
		car.fuel_check();
	}
	car.fuel_check();
	car.oiling(100);
	for (int i = 0; i < 10; i++) car.go();
	car.fuel_check();
}