//#include<iostream>
//using namespace std;
//class Matrix {
//	int num[4];
//public:
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
//		this->num[0] = a;
//		this->num[1] = b;
//		this->num[2] = c;
//		this->num[3] = d;
//	}
//
//	void show() {
//		cout << "(" << num[0] << "," << num[1] << "," << num[2] << "," << num[3] << ")" << endl;
//	}
//	friend Matrix& operator>> (Matrix& a, int* x);
//	friend Matrix& operator<< (Matrix& a, int* x);
//};
//Matrix& operator>> (Matrix& a,int* x) {
//	x[0] = a.num[0];
//	x[1] = a.num[1];
//	x[2] = a.num[2];
//	x[3] = a.num[3];
//	return a;
//}
//Matrix& operator<< (Matrix& a, int* x) {
//	a.num[0] = x[0];
//	a.num[1] = x[1];
//	a.num[2] = x[2];
//	a.num[3] = x[3];
//	return a;
//}
//
//int main() {
//	Matrix a(4, 3, 2, 1), b;
//	int x[4], y[4] = { 1,2,3,4 }; // 2���� ����� 4 ���� ���� �� 
//	a >> x; // a�� �� ���Ҹ� �迭 x�� ����. x[]�� {4,3,2,1} 
//	b << y; // �迭 y�� ���� ���� b�� �� ���ҿ� ���� 
//
//	for (int i = 0; i<4; i++) cout << x[i] << ' '; // x[] ��� 
//	cout << endl;
//	b.show();
//}