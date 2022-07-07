//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//	string name;
//public:
//	Person(string name) { this->name = name; }
//	Person() {  }
//	string getName() { return name; }
//	void setName(string name) { this->name = name; }
//};
//class Family {
//	Person* p;
//	string familyName;
//	int size;
//public:
//	Family(string name, int size) {
//		familyName = name;
//		this->size = size;
//		p = new Person[size];
//	}
//	void setName(int num, string name) {
//		p[num].setName(name);
//	}
//	void show() {
//		cout << familyName << " 가족은 다음과 같이 " << size << "명입니다."<<endl;
//		cout << p[0].getName() << endl;
//		cout << p[1].getName() << endl;
//		cout << p[2].getName() << endl;
//	}
//	
//};
//
//int main() {
//	Family* simpson = new Family("Simpson", 3);
//	simpson->setName(0, "Mr. Simpson");
//	simpson->setName(1, "Mrs. Simpson");
//	simpson->setName(2, "Bart Simpson");
//	simpson->show();
//	delete simpson;
//}