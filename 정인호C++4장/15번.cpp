//#include<iostream>
//#include<ctime>
//#include<string>
//using namespace std;
//class Player {
//	string name;
//public:
//	void setName(string name) {
//		this->name = name;
//	}
//	string getName() {
//		return name;
//	}
//};
//class GamblingGame {
//	Player *p;
//public:
//	GamblingGame() {
//		p = new Player[2];
//	}
//
//	void setName() {
//		cout << "첫번 째 선수 이름>>";
//		string name;
//		getline(cin, name, '\n');
//		p[0].setName(name);
//		cout << "두번 째 선수 이름>>";
//		getline(cin, name, '\n');
//		p[1].setName(name);
//	}
//
//	void run() {
//		cout << "***겜블링을 시작합니다." << endl;
//		this->setName();
//		int s = 0;
//		while (1) {
//			
//			
//			cout << p[s].getName() << "<Enter>";
//			string enter;
//
//			getline(cin, enter, '\n');
//			/*while (true) {
//				
//				if (enter.at(0) == '\n')
//					break;
//			}*/
//
//			int random[3] = { 0 };
//
//			for (int i = 0; i < 3; i++) {
//				random[i] = rand() % 3;
//			}
//
//			cout << "\t" << random[0] << '\t' << random[1] << '\t' << random[2] << '\t';
//			if (random[0] == random[1] && random[1] == random[2])
//			{
//				cout << p[s].getName() << " 승리!"<<endl;
//				break;
//			}	
//			else
//			{
//				cout << "아쉽군요" << endl;
//				if (s == 0)
//					s = 1;
//				else
//					s = 0;
//			}
//				
//		}
//	}
//};
//int main(void)
//{
//	GamblingGame g;
//	g.run();
//}