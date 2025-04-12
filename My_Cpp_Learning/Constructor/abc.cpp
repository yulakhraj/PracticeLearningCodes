#include <iostream>
using namespace std;
//Operator Overloading
class demo
{
private:
    int a;
    int b;
public:
    demo(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "\n a = " << a << "\t b =" << b;
    }
    demo operator+(demo ob1, demo ob2)
    {
        int ta = ob1.a + ob2.a;
        int tb = ob1.b + ob2.b;
        demo temp(ta, tb);
        return(temp);
    }
};
int main()
{
    demo ob1(10, 20);
    demo ob2(20, 30);
    demo ob3 = demo::operator+(ob1, ob2);

    ob1.display();
    ob2.display();
    ob3.display();
}
