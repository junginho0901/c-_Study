//#include<iostream>
//
//class Rectangle {
//	
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int lenght);
//	Rectangle(int w,int h);
//	int isSquare() {
//		if (width == height)
//			return 1;
//		else
//			return 0;
//	}
//};
//Rectangle::Rectangle() {
//	width = 1;
//	height = 1;
//}
//Rectangle::Rectangle(int lenght) {
//	width = height = lenght;
//}
//Rectangle::Rectangle(int w, int h) {
//	width = w;
//	height = h;
//}
//int main(void)
//{
//	Rectangle Rect1;
//	Rectangle Rect2(5);
//	Rectangle Rect3(3, 4);
//	if (Rect1.isSquare())std::cout << "은 Rect1 정사각형입니다.\n";
//	if (Rect2.isSquare())std::cout << "은 Rect2 정사각형입니다.\n";
//	if (Rect3.isSquare())std::cout << "은 Rect3 정사각형입니다.\n";
//	return 0;
//}