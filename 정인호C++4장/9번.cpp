//#include <iostream>
//#include<string>
//using namespace std;
//
//class Person {
//	string name;
//	string tel;
//public:
//	Person() {  }
//	string getName() { return name; }
//	string getTel() { return tel; }
//	void set(string name, string tel) { this->name = name; this->tel = tel; }
//};
//
//int main() {
//	cout << "이름과 전화번호를 입력해주세요" << endl;
//	string name[3], number[3];
//	for (int i = 0; i < 3; i++)
//	{
//		
//		cout << "사람" << i + 1 << ">>";
//		getline(cin, name[i], ' ');
//		getline(cin, number[i], '\n');
//
//
//	}
//
//	cout << "모든 사람의 이름은 " << name[0] << "," << name[1] << "," << name[2] << endl;
//	cout << "전화번호를 검색합니다. 이름을 입력하세요>>";
//	string search;
//	getline(cin, search, '\n');
//	for (int i = 0; i < 3; i++)
//	{
//		if (name[i] == search)
//		{
//			cout << "전화번호는 " << number[i] << "입니다.";
//			break;
//		}
//	}
//}