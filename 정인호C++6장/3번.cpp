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
//	int x = big(3, 5);	// 3�� 5 �� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5����
//	int y = big(300, 60);	// 300�� 60 �� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
//	int z = big(30, 60, 50);// 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
//	cout << x << ' ' << y << ' ' << z << endl;
//}