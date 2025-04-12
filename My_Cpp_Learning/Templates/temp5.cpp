#include <iostream>
using namespace std;

template<class T1,class T2> class demo
{
private:
    T1 a;
    T2 b;
public:
    T1 seta(int ta)
    {
        this->a = ta;
    }
    T2 setb(int tb)
    {
        this->b = tb;
    }
    T1 geta()
    {
        return(a);
    }
    T2 getb()
    {
        return(b);
    }
};

int main(){
    int a=10,b=20;
    float f1=12.5,f2=20.5;
    demo <int, int> ob;
    ob.seta(a);
    ob.setb(b);
    cout << "\n a : " << ob.geta() << "\t b : " << ob.getb();

    demo <float,float> ob2;
    ob2.seta(20.2);
    ob2.setb(30.5);
    cout << "\n a : " << ob2.geta() << "\t b : " << ob2.getb();

    return 0;
}