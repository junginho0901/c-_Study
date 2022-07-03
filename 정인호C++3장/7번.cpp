//#include<iostream>
//#include<ctime>
//#include <cstdlib>
//using namespace std;
//
//class SelectableRandom {
//public:
//	int nextEven() {
//		int n = 1;
//		while (n % 2 != 0)
//		{
//			n = rand();
//		}
//
//		return n;
//	}
//	int nextOddInRange(int start, int end)
//	{
//		int n = 0;
//		while (n % 2 != 1)
//		{
//			n = rand() % (end - start + 1) + start;
//		}
//		return n;
//	}
//};
//int main() {
//	SelectableRandom r;
//	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextEven();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2에서 9까지의 랜덤 홀수 정수 10개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextOddInRange(2, 9);
//		cout << n << ' ';
//	}
//	cout << endl;
//	return 0;
//}