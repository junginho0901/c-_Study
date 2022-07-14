//#include<iostream>
//using namespace std;
//
//class ArrayUtility2 {
//public:
//	static int* concat(int s[], int s2[], int size);
//	static int* remove(int s1[], int s2[], int size, int &retSize);
//};
//
// int* ArrayUtility2::concat(int s1[], int s2[], int size) {
//	int* arr = new int[size];
//	int ind = 0;
//	for (int i=0; i < size/2; i++)
//	{
//		arr[ind] = s1[i];
//		
//		ind++;
//	}
//	for (int i = 0; i < size / 2; i++)
//	{
//		arr[ind] = s2[i];
//		
//		ind++;
//	}
//
//	return arr;
//}
//
// int* ArrayUtility2::remove(int s1[], int s2[], int size, int &retSize) {
//	 int* tmp=new int[size];
//	 int sum = 0;
//	 for (int i = 0; i < size; i++)
//	 {
//		 for (int j = 0; j < size; j++)
//		 {
//			 if (s1[i] == s2[j])
//			 {
//				 break;
//			 }
//			 if (j == size - 1) tmp[sum++] = s1[i];
//		 }
//	 }
//	 retSize = sum;
//	 int* s = new int[sum];
//	 for (int i = 0; i < sum; i++)
//	 {
//		 s[i] = tmp[i];
//	 }
//	 delete tmp;
//	 return s;
// }
//
//int main() {
//	int x[5], y[5], retSize;
//	int* z, *w;
//
//	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
//	for (int i = 0; i < 5; i++) {
//		cin >> x[i];
//	}
//	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
//	for (int i = 0; i < 5; i++) {
//		cin >> y[i];
//	}
//	z = ArrayUtility2::concat(x, y, 10);
//	w = ArrayUtility2::remove(x, y, 5, retSize);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << z[i]<<" ";
//	}
//	cout << endl;
//	for (int i = 0; i < retSize; i++)
//	{
//		cout << w[i] << " ";
//	}
//	return 0;
//}