#include<iostream>
using namespace std;

class SortedArray {
	int size; // ���� �迭�� ũ�� 
	int *p; // ���� �迭�� ���� ������ 
	void sort(); // ���� �迭�� ������������ ���� 
public:
	SortedArray() { 
		size = 0;
		p = NULL;
	} // p�� NULL�� size�� 0���� �ʱ�ȭ 
	SortedArray(SortedArray& src) {
		this->size = src.size;
		this->p = new int[this->size];
		for (int i = 0; i<this->size; i++)
		this->p[i] = src.p[i];
	}// ���� ������ 
	SortedArray(int p[], int size) {
		this->p = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
	}// ������. ���� �迭�� ũ�⸦ ���޹��� 
	~SortedArray() {
		if (p) delete[] p;
	}; // �Ҹ��� 
	SortedArray operator+ (SortedArray& op2) {
		SortedArray test;
		test.size = this->size + op2.size;
		test.p = new int[test.size];
		for (int i = 0; i<test.size; i++) {
			if (i < this->size)
				test.p[i] = this->p[i];
			else
				test.p[i] = op2.p[i - (test.size - op2.size)]; //total size - op2.size = this->size 
		}
		return test;

	}// ���� �迭�� op2 �迭 �߰� 
	SortedArray& operator= (const SortedArray& op2) {
		delete[] p; // �迭 �޸� delete
		this->size = op2.size;
		this->p = new int[this->size]; // ��ü op2�� ũ�⸸ŭ �ٽ� ���� �Ҵ�
		for (int i = 0; i<this->size; i++)
			this->p[i] = op2.p[i];
		return *this;
	}// ���� �迭�� op2 �迭 ���� 
	void show() {
		sort();
		cout << "�迭 ��� : ";
		for (int i = 0; i<size; i++)
			cout << p[i] << ' ';
		cout << endl;
	}// �迭�� ���� ��� 
};


int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b; // +, = ������ �ۼ� �ʿ�
			   // + �����ڰ� SortedArray ��ü�� �����ϹǷ� ���� ������ �ʿ�

	a.show();
	b.show();
	c.show();
}