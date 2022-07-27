//#include<iostream>
//#include<string>
//using namespace std;
//
//class printer {
//	string model;
//	string manufacter;
//	int printedCount = 0;
//	int availableCount;
//public:
//	printer(string model, string manufacter, int paper = 0)
//	{
//		this->model = model;
//		this->availableCount = paper;
//		this->manufacter = manufacter;
//	}
//	void print(int pages) {
//		availableCount -= pages;
//		printedCount++;
//	}
//	int getPaper() {
//		return availableCount;
//	}
//	string getModel() {
//		return model;
//	}
//	string getManufacter() {
//		return manufacter;
//	}
//};
//
//class InkJet :public printer{
//	int availableInk;
//public:
//	InkJet(string model, string manufacter, int paper = 0, int Ink=0): printer(model,manufacter,paper) {
//		this->availableInk = Ink;
//	}
//	void printing(int pages){
//		if (getPaper() < pages) {
//			cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
//			return;
//		}
//		if (availableInk < pages) {
//			cout << "잉크가 부족하여 프린트 할 수 없습니다." << endl;
//			return;
//		}
//		print(pages);
//		availableInk -= pages;
//
//	}
//	void show() {
//		cout <<"잉크젯:"<< getModel() << ", " << getManufacter() << ",    " << "남은 종이 " << getPaper() << ",남은 잉크 " << availableInk << endl;
//	}
//};
//
//class Laser :public printer {
//	int availableToner;
//public:
//	Laser(string model, string manufacter, int paper = 0, int toner = 0) : printer(model, manufacter, paper) {
//		this->availableToner = toner;
//	}
//	void printing(int pages) {
//		if (getPaper() < pages) {
//			cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
//			return;
//		}
//		if (availableToner < pages) {
//			cout << "토너가 부족하여 프린트 할 수 없습니다." << endl;
//			return;
//		}
//		print(pages);
//		availableToner -= pages;
//
//	}
//	void show() {
//		cout << "레이저:"<<getModel() << ", " << getManufacter() << "," << "남은 종이 " << getPaper() << ",남은 토너 " << availableToner << endl;
//	}
//};
//
//int main() {
//	InkJet In("office V40", "HP", 5, 10);
//	Laser la("SCX-6x45", "삼성전자", 3, 20);
//	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
//	In.show();
//	
//	la.show();
//	cout << endl;
//	int menu;
//	int pages;
//	char yes;
//	while (1) {
//		cout << "프린터(1:잉크젯, 2:레이저)와 메수 입력>>";
//		cin >> menu >> pages;
//		if (menu == 1) {
//			In.printing(pages);
//		}
//		else {
//			la.printing(pages);
//		}
//		In.show();
//		la.show();
//		cout << endl;
//		cout << "계속 프린트 하시겠습니까(y,n):";
//		cin >> yes;
//		if (yes == 'n')
//		{
//			break;
//		}
//	}
//}