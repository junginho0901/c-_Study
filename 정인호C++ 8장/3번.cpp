#include<iostream>
#include<string>
using namespace std;
class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint {
	ColorPoint(int x = 0, int y = 0, string name="") {

	}
};
int main(void) {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
	return 0;
}
