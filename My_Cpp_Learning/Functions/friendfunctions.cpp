#include <iostream>
using namespace std;
class demo;
class sample
{
private:
    int a;

public:
    void seta(int x)
    {
        a = x;
    }
    friend void show(sample ob1, demo ob2);
};
class demo
{
private:
    int b;

public:
    void setb(int x)
    {
        b = x;
    }
    friend void show(sample ob1, demo ob2);
};
void show(sample ob1, demo ob2)
{
    cout << "\n a : " << ob1.a << "\tb :" << ob2.b;
}
int main()
{
    sample ob1;
    ob1.seta(10);
    demo ob2;
    ob2.setb(12);
    show(ob1, ob2);
    return 0;
}
