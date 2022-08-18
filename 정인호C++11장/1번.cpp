#include<iostream>
using namespace std;
int main(){
    char c;
    int result=0;
    while((c=cin.get())!=EOF){
        if(c=='a'){
            result++;
        }
        else if(c=='\n')
            break;
        
    }

    cout<<result<<"개 입니다.";
}