//#include<iostream>
//using namespace std;
////
////int big(int x, int y)
////{
////	if (x>y)
////	{
////		if (x>100)
////			return 100;
////		else
////			return x;
////	}
////	else
////	{
////		if (y>100)
////			return 100;
////		else
////			return y;
////	}
////}
//
//int big(int x, int y, int z=100)
//{
//	if (x>y)
//	{
//		if (x>z)
//			return z;
//		else
//			return x;
//	}
//	else
//	{
//		if (y>z)
//			return z;
//		else
//			return y;
//	}
//}
//
//int main()
//{
//	int x = big(3, 5);	// 3과 5 중 큰 값 5는 최대값 100보다 작으므로, 5리턴
//	int y = big(300, 60);	// 300과 60 중 큰 값 300이 최대값 100보다 크므로, 100 리턴
//	int z = big(30, 60, 50);// 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
//	cout << x << ' ' << y << ' ' << z << endl;
//}