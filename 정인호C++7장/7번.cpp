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
//	Matrix& operator>> (int* x) {
//		x[0] = this->num[0];
//		x[1] = this->num[1];
//		x[2] = this->num[2];
//		x[3] = this->num[3];
//		return *this;
//	}
//	Matrix& operator<< (int* x) {
//		 this->num[0]= x[0];
//		this->num[1]=x[1];
//		 this->num[2]=x[2] ;
//		 this->num[3]=x[3] ;
//		return *this;
//	}
//};
//
//
//
//int main() {
//	Matrix a(4, 3, 2, 1), b;
//	int x[4], y[4] = { 1,2,3,4 }; // 2차원 행렬의 4 개의 원소 값 
//	a >> x; // a의 각 원소를 배열 x에 복사. x[]는 {4,3,2,1} 
//	b << y; // 배열 y의 원소 값을 b의 각 원소에 설정 
//
//	for (int i = 0; i<4; i++) cout << x[i] << ' '; // x[] 출력 
//	cout << endl;
//	b.show();
//}