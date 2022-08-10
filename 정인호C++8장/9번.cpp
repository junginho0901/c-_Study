#include<iostream>
#include<string>
#pragma once
class Console {};
class Schedule {};
class Seat {};

using namespace std;

class AirlineBook {
	Schedule *schedule;
	string name = "";
	int time;
public:
	AirlineBook(){
		schedule = new Schedule[3];
		schedule[0].setTime("07");
		schedule[0].setTime("12");
		schedule[0].setTime("17");
	}
	~AirlineBook() { delete[] schedule; }
	void start() {
		cout << "�Ѽ��װ��� ���� ���� ȯ���մϴ�." << endl;
		 bool b= 1;
		while (b) {
			int menu=Console::select_menu();
			switch (menu)
			{
			case 1:
				time = Console::select_time();
				schedule[time - 1].show();
				int seat = Console::input_seat_num();
				if (seat == 0)break;
				name = Console::input_name();
				schedule[time-1].reserve(seat,name);
				break;
			case 2:
				time = Console::select_time();
				schedule[time - 1].show();
				int seat = Console::input_seat_num();
				if (seat == 0)break;
				name = Console::input_name();
				schedule[time - 1].cancel(seat, name);
				break;
			case 3:
				for (int i = 0; i < 3; i++) {
					schedule[i].show();
				}
				break;
			case 4:
				b = 0;
				break;
			default:
				break;
			}
		}
	}
};
class Console {
	static int menu;
	static int time;
	static int seatNum;
	static string name;
public:
	static int select_menu() {
		cout << "����:1, ���:2, ����:3, ������:4>> ";
		int menu;
		cin >> menu;
		return menu;
	}

	static int select_time() {
		cout << "07��:1, 12��:2, 17��:3>> ";
		int time;
		cin >> time;
		return time;
	}
	static int input_seat_num(){
		cout << "�¼� ��ȣ>> ";
		int seat_num;
		cin >> seat_num;
		if (seat_num < 1 || 8 < seat_num) {
			cout << "���� �¼� ��ȣ �Դϴ�. ó�� �޴��� ���ư��ϴ�.\n";
			return 0;
		}
		return seat_num;
	}
	static string input_name() {
		cout << "�̸� �Է�>> ";
		string name;
		cin >> name;
		return name;
	}

};

class Schedule {
	Seat *s;
	string name;
public:
	Schedule() {
		s = new Seat[8];
	}
	Schedule() {
		delete[] s;
	}
	void setTime(string name) {
		this->name = name;
	}
	string getTime() {
		return name;
	}
	void reserve(int num, string name) {
		s[num - 1].setSeat(name);
	}
	void cancel(int num, string name) {
		s[num - 1].setSeat("----");
	}
	void show() {
		cout << name << ":";
		for (int i = 0; i < 8; i++) {
			cout << "  " << s[i].getName() ;
		}
		cout << endl;
	}
};
class Seat {
	string seat = "----";
public:
	void setSeat(string name) {
		this->seat = name;
	}
	string getName() {
		return seat;
	}
};
int main() {
	AirlineBook *air = new AirlineBook();
	air->start();
	delete air;
}
