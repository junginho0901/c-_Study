//
//#include<iostream>
//using namespace std;
//
//
//
//class BaseArray {
//	int capacity; // �迭�� ũ��
//	int *mem; // ���� �迭�� ����� ���� �޸��� ������
//protected: // �����ڰ� protected 
//	BaseArray(int capacity = 100) {
//		this->capacity = capacity; mem = new int[capacity];
//	}
//	~BaseArray() { delete[] mem; }
//	void put(int index, int val) { mem[index] = val; }
//	int get(int index) { return mem[index]; }
//	int getCapacity() { return capacity; }
//};
//
//class MyStack :public BaseArray {
//	int x = -1;
//public:
//	MyStack(int n) :BaseArray(n) {
//
//	}
//	void enqueue(int n) {
//		put(++x, n);
//
//	}
//	int capacity() {
//		return getCapacity();
//	}
//	int length() {
//		return x + 1;
//	}
//	int dequeue() {
//		int re = get(x);
//		x--;
//		return re;
//	}
//};
//int main() {
//	MyStack mQ(100);
//	int n;
//	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
//	for (int i = 0; i<5; i++) {
//		cin >> n;
//		mQ.enqueue(n); // ť�� ���� 
//	}
//	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
//	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
//	while (mQ.length() != 0) {
//		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ��� 
//	}
//	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
//}
