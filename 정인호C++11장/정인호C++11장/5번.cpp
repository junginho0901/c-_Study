#include<iostream>
#include<string>
using namespace std;

int main() {
	string cmd;
	cout << "cin.get(char*, int)�� ���ڿ��� �н��ϴ�." << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd); // 79�������� ���� ����
		if (cmd=="exit") {
			cout << "���α׷��� �����մϴ�....";
			return 0;
		}
		
	}
}
