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
//	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
//	while (1) {
//		int year;
//		string name, writer;
//		cout << "�⵵>>"; cin >> year;
//		if (year == -1) break;
//		//fflush(stdin);
//		while (getchar() != '\n');
//
//		cout << "å�̸�>>";
//		getline(cin, name);
//		cout << "����>>"; 
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
//	cout << "�� �԰� �� å�� " << v.size() << "�� �Դϴ�."<<endl;
//	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���:";
//	string name;
//	cin >> name;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i].getAuthor() == name)
//		cout << v[i].getYear() << "," << v[i].getName() << "," << v[i].getAuthor() << endl;
//	}
//	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���:";
//	int year;
//	cin >> year;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i].getYear() == year)
//		cout << v[i].getYear() << "," << v[i].getName() << "," << v[i].getAuthor() << endl;
//	}
//	
//}