//#include<iostream>
//using namespace std;
//#include<string>
//class Circle {
//	int radius;
//	string name;
//public:
//	void setCircle(string name, int radius);
//	double getArea();
//	string getName();
//
//};
//void Circle::setCircle(string name, int radius)
//{
//	this->name = name;
//	this->radius = radius;
//
//}
//
//double Circle::getArea() {
//	return radius * radius*3.14;
//}
//string Circle::getName() {
//	return name;
//}
//class CircleManager {
//	Circle *p;
//	int size;
//public:
//	CircleManager(int size);
//	~CircleManager();
//	void searchByName();
//	void searchByArea();
//};
//
//CircleManager::CircleManager(int size) {
//	this->size = size;
//	p = new Circle[size];
//	if (!p)
//		return;
//	string name;
//	int radius;
//	for (int i = 0; i < size; i++) {
//		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
//		cin >> name >> radius;
//		p[i].setCircle(name, radius);
//	}
//}
//CircleManager::~CircleManager() {}
//void CircleManager::searchByName() {
//	cout << "�˻��ϰ��� �ϴ� ���� �̸�>>";
//	string name;
//	getline(cin, name, '\n');
//
//	for (int i = 0; i < size; i++)
//	{
//		if (name == p[i].getName())
//		{
//			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
//			break;
//		}
//	}
//}
//void CircleManager::searchByArea() {
//	cout << "�ּ� ������ ������ �Է��ϼ���:";
//	int a;
//	cin >> a;
//	cout << a << "���� ū ���� �˻��մϴ�." << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if (a < p[i].getArea())
//		{
//			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
//		}
//	}
//	cout << endl;
//}
//
//int main(void) {
//
//	int size;
//	cout << "���� ����>> ";
//	cin >> size;
//	CircleManager p(size);
//	p.searchByName();
//	p.searchByArea();
//
//	return 0;
//}