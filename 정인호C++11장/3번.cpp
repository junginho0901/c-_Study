#include<iostream>
using namespace std;
int main() {
    int ch;
    cin.ignore(100, ';'); // 와일문 들어가기 전에 설정을 해놓아야 바로 지워짐
    while((ch=cin.get()) != EOF) {
        cout.put(ch);
        if(ch == '\n') 
            cin.ignore(100, ';'); // 영어 문장이 최대 99개의 문자로 입력된다고 가정한다.
    }
}