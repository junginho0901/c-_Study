//#include<iostream>
//#include<string>
//using namespace std;
//class Trace {
//	static string str[100];
//	static int index;
//public:
//	static void put(string a, string b);
//	static void print(string a=" ");
//};
//string Trace::str[100] = { "" };
//int Trace::index=0;
//void Trace::put(string a, string b) {
//	str[index++] = a;
//	str[index++] = b;
//}
//void Trace::print(string a) {
//	if (a == " ")
//	{
//		cout << "-----------" << "main �±��� Trace ������ ����մϴ�." << "-----------" << endl;
//		for (int i = 0; i < index; i=i+2)
//		{
//				cout << str[i] << str[i+1] << endl;	
//		}
//	}
//	cout << "-----------" << a << "�±��� Trace ������ ����մϴ�." << "-----------" << endl;
//	for (int i = 0; i < index; i=i+2)
//	{
//		if (a == str[i]) {
//			cout << str[i] << str[i + 1] << endl;
//		}
//	}
//}
//void f() {
//	int a, b, c;
//	cout << "�� ���� ������ �Է��ϼ���>>";
//	cin >> a >> b;
//	Trace::put("f()", "������ �Է� �޾���");
//	c = a + b;
//	Trace::put("f()", "�� ���");
//	cout << "���� " << c << endl;
//}
//
//
//
//int main() {
//	Trace::put("main()", "���α׷� �����մϴ�");
//	f();
//
//	Trace::put("main()", "����");
//	Trace::print("f()");
//	Trace::print();
//	return 0;
//}