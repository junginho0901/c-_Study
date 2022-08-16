#include <iostream>
#include <vector>
using namespace std;
class Nation
{
    string nation;
    string capital;

public:
    Nation(string n = 0, string c = 0)
    {
        nation = n;
        capital = c;
    }
    string getNation()
    {
        return nation;
    }
    string getCapital()
    {
        return capital;
    }
    bool nationCompare(string n)
    { //나라 이름을 비교하는 함수.
        if (nation == n)
            return true;
        return false;
    }
};

int main(void)
{
    vector<Nation> v;
    v.push_back(Nation("대한민국", "서울"));
    v.push_back(Nation("중국", "베이징"));
    v.push_back(Nation("북한", "평양"));
    v.push_back(Nation("미국", "와싱턴"));
    v.push_back(Nation("대만", "타이베이"));
    v.push_back(Nation("캐나다", "오타와"));
    v.push_back(Nation("스위스", "제네바"));
    v.push_back(Nation("프랑스", "파리"));
    v.push_back(Nation("이집트", "카이로"));
    cout << "*****나라의 수도 맞추기 게임을 시작합니다.*****" << endl;
    while (1)
    {
        cout << "정보 입력:1,퀴즈:2,종료:3>>";
        int menu;
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다.\n";
            cout << "나라와 수도를 입력하세요(no no 이면 입력끝)\n";
            while (1)
            {
                cout << v.size()<<" ";
                string s1, s2;
                cin >> s1;

                cin.ignore();
                cin>>s2;
                 cin.ignore();
                if (s1 == "no" && s2 == "no")
                    break;
                int i;
                for (i = 0; i < v.size(); i++)
                {
                    if (v[i].getNation() == s1)
                    {
                        cout << "already exists" << endl;
                        break;
                    }
                }
                if (i == v.size())
                {
                    v.push_back(Nation(s1, s2));
                }
            }
            break;
        case 2:
            while (1)
            {
                string answer;
                int random = rand() % v.size();
                cout << v[random].getNation() << "의 수도는?";
                cin >> answer;
                if (answer == "exit")
                    break;
                if (v[random].getCapital() == answer)
                    cout << "correct" << endl;
                else
                    cout << "NO!!" << endl;
            }
            break;

        case 3:
            return 0;

        default:
            break;
        }
    }
}
