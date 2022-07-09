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
//		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
//		cin >> name >> radius;
//		p[i].setCircle(name, radius);
//	}
//}
//CircleManager::~CircleManager() {}
//void CircleManager::searchByName() {
//	cout << "검색하고자 하는 원의 이름>>";
//	string name;
//	getline(cin, name, '\n');
//
//	for (int i = 0; i < size; i++)
//	{
//		if (name == p[i].getName())
//		{
//			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
//			break;
//		}
//	}
//}
//void CircleManager::searchByArea() {
//	cout << "최소 면적을 정수로 입력하세요:";
//	int a;
//	cin >> a;
//	cout << a << "보다 큰 원을 검색합니다." << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if (a < p[i].getArea())
//		{
//			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
//		}
//	}
//	cout << endl;
//}
//
//int main(void) {
//
//	int size;
//	cout << "원의 개수>> ";
//	cin >> size;
//	CircleManager p(size);
//	p.searchByName();
//	p.searchByArea();
//
//	return 0;
//}