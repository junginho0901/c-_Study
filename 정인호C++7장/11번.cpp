//#include<iostream>
//using namespace std;
//
//class Stack {
//	int stack[10];
//	int top;
//public:
//	Stack() { top = 0; }
//	Stack& operator<< (int num) {
//		stack[top] = num;
//		top++;
//		return *this;
//	}
//	bool operator! () {
//		if (top)
//			return false;
//		return true; //top�� empty�� true ��ȯ 
//	}
//	Stack operator>> (int& x) {
//		x = stack[top - 1];
//		top--;
//		return *this;
//	}
//};
//
//int main() {
//	Stack stack;
//	stack << 3 << 5 << 10; // 3,5,10 ������� push 
//	while (true) {
//		if (!stack) break; //stack empty
//		int x;
//		stack >> x; //stack�� top�� �ִ� ���� pop 
//		cout << x << ' ';
//	}
//	cout << endl;
//}
