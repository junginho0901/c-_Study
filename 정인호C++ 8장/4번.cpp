//#include<iostream>
//#include<string>
//using namespace std;
//class Point {
//	int x, y;
//public:
//	Point(int x, int y) { this->x = x; this->y = y; }
//	int getX() { return x; }
//	int getY() { return y; }
//protected:
//	void move(int x, int y) { this->x = x; this->y = y; }
//};
//class ColorPoint : public Point {
//
//	string name;
//public:
//	ColorPoint(int x = 0, int y = 0, string name = "Black") :Point(x, y) {
//		this->name = name;
//	}
//
//	void setPoint(int x, int y) { move(x, y); }
//	void setColor(string name) { this->name = name; }
//	void show() { cout << name << getX() << getY() << endl; }
//};
//int main(void) {
//	ColorPoint zeroPoint; // BLACK 색에 (0, 0) 위치의 점
//	zeroPoint.show(); // zeroPoint를 출력한다.
//
//	ColorPoint cp(5, 5);
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show(); // cp를 출력한다
//}
