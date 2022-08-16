//#include<iostream>
//using namespace std;
//
//template <class T>
//T *concat(T a[], int size, T b[], int sizeb) {
//	T* arr = new T[size + sizeb];
//	int j = 0;
//	for (int i = 0; i < size; i++)
//	{
//		arr[j++] = a[i];
//	}
//	for (int i = 0; i < sizeb; i++)
//	{
//		arr[j++] = b[i];
//	}
//	
//	return arr;
//}
//
//int main() {
//	int x[] = { 1, 10, 100, 5, 4 };
//	int y[] = { 7, 6, 10, 9 };
//	int *a = concat(x, 5, y, 4);
//	int aSize = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]); // a에 들어있는 원소의 개수 
//
//	for (int i = 0; i<aSize; i++)
//		cout << a[i] << ' ';
//}
