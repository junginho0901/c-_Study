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
//������ ���� ����
MyCar::MyCar(int n) {
	this->fuel = n;
	this->power = true;
}
//�Ҹ���(���� ���� �Ұ���)
MyCar::~MyCar() {
	std::cout << "�Ҹ�Ǿ����ϴ�." << std::endl;
}
void MyCar::go() {
	fuel -= 10;
}
void MyCar::oiling(int n)
{
	fuel += n;
}
void MyCar::fuel_check() {
	cout << "���� �⸧���� " << fuel << "L�Դϴ�." << endl;


}

void main() {
	MyCar car = MyCar(); //MySuv ��ü ����

						 //�޼��� ȣ��
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