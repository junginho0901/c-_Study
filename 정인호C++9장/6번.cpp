#include<iostream>
using namespace std;
class AbstractStack{
    public:
    virtual bool push(int n)=0;
    virtual bool pop(int& n)=0;
    virtual int  size( )=0;

};
class IntStack:public AbstractStack{
private:
int top;
int* arr;
public:
IntStack(){
    top=-1;
    arr=new int[100];
}
~IntStack(){
    delete arr;
}
bool push(int n){
    if(top==100)
    return false;
    arr[++top]=n;
    return true;
}
bool pop(int& n){
    if(top==-1)
    {
        return false;
    }
    n=arr[top--];
    return true;
}
int  size( ){
    return top-1;
}
void show(){
    for(int i=0;i<top+1;i++){
        cout<<arr[i]<<" ";
    }
}
};


int main(){
    IntStack intStack;

	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.push(4);
	intStack.push(5);
	intStack.push(6);

	intStack.show();

	int n;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.show();

	return 0;
}