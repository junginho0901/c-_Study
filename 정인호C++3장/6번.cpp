//#include<iostream>
//#include<ctime>
//#include <cstdlib>
//using namespace std;
//
//class Random {
//public:
//	int next() {
//		int n=1;
//		while (n%2!=0)
//		{
//			n = rand();
//		}
//		
//		return n;
//	}
//	int nextInRange(int start, int end)
//	{
//		int n = 1;
//		while (n % 2 != 0)
//		{
//			n = rand() % (end - start + 1) + start;
//		}
//		return n;
//	}
//};
//int main() {
//	Random r;
//	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 10);
//		cout << n << ' ';
//	}
//	cout << endl;
//	return 0;
//}