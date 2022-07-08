//#include<iostream>
//using namespace std;
//
//class Container {
//	int size;
//public:
//	Container() { size = 10; }
//	void fill();
//	void consume();
//	int getSize();
//};
//void Container::fill() {
//	size = 10;
//}
//void Container::consume() {
//	size--;
//
//}
//int Container::getSize() {
//	return size;
//}
//class CoffeeVendingMachine {
//	Container tong[3];
//	void fill();
//	void selectEspresso();
//	void selectAmericano();
//	void selectSugarCoffee();
//	void show();
//public:
//	void run();
//};
//void CoffeeVendingMachine::run() {
//	cout << "***커피 자판기를 작동합니다." << endl;
//	while (1)
//	{
//
//		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
//		int num;
//		cin >> num;
//		switch (num)
//		{
//		case 1:
//			selectEspresso();
//			break;
//		case 2:
//			selectAmericano();
//			break;
//		case 3:
//			selectSugarCoffee();
//			break;
//		case 4:
//			show();
//			break;
//		case 5:
//			fill();
//			break;
//		default:
//			break;
//		}
//	}
//}
//void CoffeeVendingMachine::fill() {
//	for (int i = 0; i < 3; i++)
//	{
//		tong[i].fill();
//	}
//}
//void CoffeeVendingMachine::selectAmericano() {
//	tong[0].consume();
//	tong[1].consume();
//	tong[1].consume();
//	cout << "아메리카노를 드세요" << endl;
//}
//void CoffeeVendingMachine::selectEspresso() {
//	tong[0].consume();
//	tong[1].consume();
//	cout << "에스프레소를 드세요" << endl;
//}
//void CoffeeVendingMachine::selectSugarCoffee() {
//	tong[0].consume();
//	tong[1].consume();
//	tong[1].consume();
//	tong[2].consume();
//	cout << "설탕커피를 드세요" << endl;
//}
//void CoffeeVendingMachine::show() {
//	cout << "커피 남은 량:" << tong[0].getSize() << endl;
//	cout << "물 남은 량:" << tong[1].getSize() << endl;
//	cout << "설탕 남은 량:" << tong[2].getSize() << endl;
//}
//int main(void) {
//
//	CoffeeVendingMachine machine;
//	machine.run();
//
//	return 0;
//}