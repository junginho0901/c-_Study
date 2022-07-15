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
//		cout << "-----------" << "main 태그의 Trace 정보를 출력합니다." << "-----------" << endl;
//		for (int i = 0; i < index; i=i+2)
//		{
//				cout << str[i] << str[i+1] << endl;	
//		}
//	}
//	cout << "-----------" << a << "태그의 Trace 정보를 출력합니다." << "-----------" << endl;
//	for (int i = 0; i < index; i=i+2)
//	{
//		if (a == str[i]) {
//			cout << str[i] << str[i + 1] << endl;
//		}
//	}
//}
//void f() {
//	int a, b, c;
//	cout << "두 개의 정수를 입력하세요>>";
//	cin >> a >> b;
//	Trace::put("f()", "정수를 입력 받았음");
//	c = a + b;
//	Trace::put("f()", "합 계산");
//	cout << "합은 " << c << endl;
//}
//
//
//
//int main() {
//	Trace::put("main()", "프로그램 시작합니다");
//	f();
//
//	Trace::put("main()", "종료");
//	Trace::print("f()");
//	Trace::print();
//	return 0;
//}