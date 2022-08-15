#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> v;
    while(1){
        cout<<"정수를 입력하시오(0을 입력하면 종료)>>";
        int x;
        cin>>x;
        if(x==0)
        {
            break;
        }
        v.push_back(x);
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
            sum+=v[i];
        }
        cout<<endl;
        cout<<"평균:"<<(double)sum/v.size()<<endl;
        

    }
}