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
    demo operator+(demo ob)
    {
        int ta = this->a + ob.a;
        int tb = this->b + ob.b;
        demo temp(ta, tb);
        return(temp);
    }

    bool operator==(demo ob)
    {
        if ((this->a == ob.a) && (this->b == ob.b))
            return true;
        else
            return false;
    }
    demo operator>(demo ob){
        bool flag=true;
        if(this->a > ob.a && this->b >ob.b){
            flag=true;
        }
    }
};
int main()
{
    demo ob1(10, 20);
    demo ob2(20, 30);
    demo ob3 = ob1 + ob2;
    ob1.display();
    ob2.display();
    ob3.display();

    if (ob1 == ob2)
        cout << "\n Both are equal";
    else
        cout << "\n Both are unequal";
    
    return 0;
}