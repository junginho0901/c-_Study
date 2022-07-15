//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//class Board {
//public:
//	static int num;
//	static string str[100];
//	static void add(string a);
//	static void print();
//};
//
//int Board::num = 0;
//string Board::str[100] = { "" };
//
//void Board::add(string a) {
//	str[num++] = a;
//}
//
//void Board::print() {
//	cout << "*****************게시판입니다******************" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << i << ":" << str[i] << endl;
//	}
//}
//int main() {
//	Board::add("중간고사는 감독 없는 자율 시험입니다.");
//	Board::add("코딩 라운지 많이 이용해 주세요.");
//	Board::print();
//	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
//	Board::print();
//	return 0;
//}