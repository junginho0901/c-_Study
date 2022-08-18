#include<iostream>
using namespace std;

int main(){
    char c;
    int result=0;
    while(1){
        cin.get(c);
        if(c=='\n'){
            break;
        }
        if(c==' ')
        result++;
    }

    cout<<result;
}