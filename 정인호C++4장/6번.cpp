//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	string str;
//	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
//	while (true) {
//		cout << ">>";
//		getline(cin, str, '\n');
//		if (str == "exit")
//			break;
//		string reverseStr = str;	//�Է¹��� ���ڿ��� ������ �Ѽ����� �ʱ� ����
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