//#include <iostream>
//#include <string>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//int main(void)
//{
//	int cir;
//	cout << "���� ����>>";
//	cin >> cir;
//
//	Circle *p = new Circle[cir];
//	int num = 0;
//		for (int i = 0; i < cir; i++)
//		{
//			cout << "�� " << i+1 << "�� ������>>";
//			int radi;
//			cin >> radi;
//			p[i].setRadius(radi);
//	
//		}
//	for (int i = 0; i < cir; i++)
//	{
//		if (p[i].getArea() > 100)
//			num++;
//	}
//	cout << "������ 100���� ū ���� " << num << "�� �Դϴ�.";
//}