#include<iostream>
using namespace std;

class SortedArray {
	int size; // 현재 배열의 크기 
	int *p; // 정수 배열에 대한 포인터 
	void sort(); // 정수 배열을 오름차순으로 정렬 
public:
	SortedArray() { 
		size = 0;
		p = NULL;
	} // p는 NULL로 size는 0으로 초기화 
	SortedArray(SortedArray& src) {
		this->size = src.size;
		this->p = new int[this->size];
		for (int i = 0; i<this->size; i++)
		this->p[i] = src.p[i];
	}// 복사 생성자 
	SortedArray(int p[], int size) {
		this->p = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
	}// 생성자. 정수 배열과 크기를 전달받음 
	~SortedArray() {
		if (p) delete[] p;
	}; // 소멸자 
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

	}// 현재 배열에 op2 배열 추가 
	SortedArray& operator= (const SortedArray& op2) {
		delete[] p; // 배열 메모리 delete
		this->size = op2.size;
		this->p = new int[this->size]; // 객체 op2의 크기만큼 다시 동적 할당
		for (int i = 0; i<this->size; i++)
			this->p[i] = op2.p[i];
		return *this;
	}// 현재 배열에 op2 배열 복사 
	void show() {
		sort();
		cout << "배열 출력 : ";
		for (int i = 0; i<size; i++)
			cout << p[i] << ' ';
		cout << endl;
	}// 배열의 원소 출력 
};


int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b; // +, = 연산자 작성 필요
			   // + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요

	a.show();
	b.show();
	c.show();
}