//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Book {
//	string name;
//	string author;
//	int year;
//public:
//	void setName(string name) {
//		this->name = name;
//	};
//	void setAuthor(string author) {
//		this->author = author;
//	};
//	void setYear(int year) {
//		this->year = year;
//	};
//	string getName() {
//		return name;
//	}
//	string getAuthor() {
//		return author;
//	}
//	int getYear() {
//		return year;
//	}
//};
//int main(void)
//{
//	vector<Book> v;
//	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
//	while (1) {
//		int year;
//		string name, writer;
//		cout << "년도>>"; cin >> year;
//		if (year == -1) break;
//		//fflush(stdin);
//		while (getchar() != '\n');
//
//		cout << "책이름>>";
//		getline(cin, name);
//		cout << "저자>>"; 
//		getline(cin, writer);
//		Book b;
//		b.setName(name);
//		b.setAuthor(writer);
//		b.setYear(year);
//
//		v.push_back(b);
//
//	
//	}
//
//	cout << "총 입고 된 책은 " << v.size() << "권 입니다."<<endl;
//	cout << "검색하고자 하는 저자 이름을 입력하세요:";
//	string name;
//	cin >> name;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i].getAuthor() == name)
//		cout << v[i].getYear() << "," << v[i].getName() << "," << v[i].getAuthor() << endl;
//	}
//	cout << "검색하고자 하는 년도를 입력하세요:";
//	int year;
//	cin >> year;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i].getYear() == year)
//		cout << v[i].getYear() << "," << v[i].getName() << "," << v[i].getAuthor() << endl;
//	}
//	
//}