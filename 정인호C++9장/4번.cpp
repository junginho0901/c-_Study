#include <iostream>
using namespace std;
class LoopAdder
{
    string name;
    int x, y, sum;
    void read();
    void write();

protected:
    LoopAdder(string name = "")
    {
        this->name = name;
    }
    int getX() { return x; }
    int getY() { return y; }
    virtual int calculate() = 0;

public:
    void run();
};
void LoopAdder::read()
{
    cout << name << ":" << endl;
    cout << "처음 수에서 두번쨰 수까지 더합니다. 두 수를 입력하세요:";
    cin >> x >> y;
   
}
void LoopAdder::write()
{
    cout << x << "에서 " << y << "까지의 합=" << sum << "입니다." << endl;
}

void LoopAdder::run()
{
    read();
    sum = calculate();
    write();
}

class WhileLoopAdder : public LoopAdder
{
public:
    WhileLoopAdder(string name = "") : LoopAdder(name){};
    int calculate()
    {
        int result = 0;
        int i = getX();
        while (i <= getY())
        {
            result += i;
            i++;
        }
        return result;
    }
};
class doWhileLoopAdder : public LoopAdder
{
public:
    doWhileLoopAdder(string name = "") : LoopAdder(name){};
    int calculate()
    {
        int result = 0;
        int i=getX();
        do
        {
            result += i;
            i++;
        } while (i <= getY());
        return result;
    }
};
int main()
{
    WhileLoopAdder whileLoop("while Loop");
    doWhileLoopAdder doWhileLoop("Do while Loop");
    whileLoop.run();
    doWhileLoop.run();
}