//#include<iostream>
//using namespace std;
//class Statistics {
//	int *a;
//	int cnt; //�迭�� ���� ���� 
//public:
//	Statistics() { a = new int[8]; cnt = 0; }
//
//	bool operator !() {
//		if (this->cnt == 0) {
//			return true;
//		}
//		else return false;
//	}
//	Statistics& operator <<(int x) {
//		a[cnt++] = x;
//		return *this;
//	}
//	void operator ~() {
//		for (int i = 0; i < cnt; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//
//	Statistics& operator>>(int& b) {
//		int result = 0;
//		for (int i = 0; i < cnt; i++)
//		{
//			result += a[i];
//		}
//		b = result / cnt;
//		return *this;
//	}
//	
//};
//
//
//int main() {
//	Statistics stat;
//	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�." << endl;
//
//	int x[5];
//	cout << "5 ���� ������ �Է��϶�>>";
//	for (int i = 0; i<5; i++) cin >> x[i]; // x[i]�� ���� �Է� 
//
//	for (int i = 0; i<5; i++) stat << x[i]; // x[i] ���� ��� ��ü�� �����Ѵ�. 
//	stat << 100 << 200; // 100, 200�� ��� ��ü�� �����Ѵ�. 
//	~stat; // ��� �����͸� ��� ����Ѵ�. 
//
//	int avg;
//	stat >> avg; // ��� ��ü�κ��� ����� �޴´�. 
//	cout << "avg=" << avg << endl;  // ����� ����Ѵ�. 
//}
