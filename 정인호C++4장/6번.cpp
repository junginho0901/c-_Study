//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	string str;
//	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
//	while (true) {
//		cout << ">>";
//		getline(cin, str, '\n');
//		if (str == "exit")
//			break;
//		string reverseStr = str;	//입력받은 문자열의 원본을 훼손하지 않기 위해
//		int length = reverseStr.size();
//		char temp;
//		for (int i = 0; i < length / 2; i++) {
//			temp = reverseStr[i];
//			reverseStr[i] = reverseStr[length - i - 1];
//			reverseStr[length - 1 - i] = temp;
//		}
//		cout << reverseStr << endl;
//	}
//
//	return 0;
//}