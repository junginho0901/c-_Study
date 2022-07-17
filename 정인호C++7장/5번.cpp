#include <iostream>
using namespace std;
class Color{
    int r,g,b;
public:
    Color(int r=0,int g=0,int b=0){
        this->r=r;
        this->g=g;
        this->b=b;
    }
    
    Color operator+(Color a){
        Color tmp;
        tmp.r=this->r+a.r;
        tmp.g=this->g+a.g;
        tmp.b=this->g+a.b;

        return tmp;
    }

 bool operator==(Color a){
       if(this->r==a.r&&this->g==a.g&&this->b==a.b)
       return true;
       else
       return false;
    }
    void show(){
        cout<<r<<","<<g<<","<<b<<" 색입니다."<<endl;
    }
};
int main()
{
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();                   // 색 값 출력
    Color fuchsia(255, 0, 255); // R 255, G 0, B 255가 합쳐진 보라색
    if (c == fuchsia)
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";
}
