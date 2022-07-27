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
//			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
//			return;
//		}
//		if (availableInk < pages) {
//			cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
//			return;
//		}
//		print(pages);
//		availableInk -= pages;
//
//	}
//	void show() {
//		cout <<"��ũ��:"<< getModel() << ", " << getManufacter() << ",    " << "���� ���� " << getPaper() << ",���� ��ũ " << availableInk << endl;
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
//			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
//			return;
//		}
//		if (availableToner < pages) {
//			cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
//			return;
//		}
//		print(pages);
//		availableToner -= pages;
//
//	}
//	void show() {
//		cout << "������:"<<getModel() << ", " << getManufacter() << "," << "���� ���� " << getPaper() << ",���� ��� " << availableToner << endl;
//	}
//};
//
//int main() {
//	InkJet In("office V40", "HP", 5, 10);
//	Laser la("SCX-6x45", "�Ｚ����", 3, 20);
//	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
//	In.show();
//	
//	la.show();
//	cout << endl;
//	int menu;
//	int pages;
//	char yes;
//	while (1) {
//		cout << "������(1:��ũ��, 2:������)�� �޼� �Է�>>";
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
//		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y,n):";
//		cin >> yes;
//		if (yes == 'n')
//		{
//			break;
//		}
//	}
//}