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
//	cout << "원의 개수>>";
//	cin >> cir;
//
//	Circle *p = new Circle[cir];
//	int num = 0;
//		for (int i = 0; i < cir; i++)
//		{
//			cout << "원 " << i+1 << "의 반지름>>";
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
//	cout << "면적이 100보다 큰 원은 " << num << "개 입니다.";
//}