#include <iostream>
using namespace std;

class demo
{
private:
    int a;
    int b;
public:
    void seta(int ta)
    {
        a = ta;
    }
    int geta()
    {
        return(a);
    }
    void setb(int tb)
    {
        b = tb;
    }
    int getb()
    {
        return(b);
    }
};

 
class sample
{
private:
    float a;
    float b;
public:
    void seta(float ta)
    {
        a = ta;
    }
    float geta()
    {
        return(a);
    }
    void setb(float tb)
    {
        b = tb;
    }
    float getb()
    {
        return(b);
    }
};

template <class T> T operator +(T obj1,T obj2){
    T sumobj;
    sumobj.seta(obj1.geta()+obj2.geta());
    sumobj.setb(obj1.getb()+obj2.getb());
    return (sumobj);
}

template <class T1, class T2> 
void display2(T1 x, T2 y)
{
    cout << "\n x : " << x <<"\t y ="<<y;
}

template <class T> 
void swap1(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    demo ob1, ob2;
    ob1.seta(10);
    ob1.setb(20);

    ob2.seta(100);
    ob2.setb(200);

    cout << "\n Before Swapping ob1 \n";
    cout << "\n a : " << ob1.geta() << "\t b :" << ob1.getb();
    cout << "\n Before Swapping  ob2 \n";
    cout << "\n a : " << ob2.geta() << "\t b :" << ob2.getb();
    swap1(ob1, ob2);
    cout << "\n After Swapping ob1 \n";
    cout << "\n a : " << ob1.geta() << "\t b :" << ob1.getb();
    cout << "\n After Swapping ob2 \n";
    cout << "\n a : " << ob2.geta() << "\t b :" << ob2.getb();


    sample ob3, ob4;
    ob3.seta(10.5);
    ob3.setb(20.20);

    ob4.seta(100.45);
    ob4.setb(200.23);

    cout << "\n Before Swapping ob3 \n";
    cout << "\n a : " << ob3.geta() << "\t b :" << ob3.getb();
    cout << "\n Before Swapping ob4 \n";
    cout << "\n a : " << ob4.geta() << "\t b :" << ob4.getb();
    swap1(ob3, ob4);
    cout << "\n After Swapping ob3 \n";
    cout << "\n a : " << ob3.geta() << "\t b :" << ob3.getb();
    cout << "\n After Swapping ob4 \n";
    cout << "\n a : " << ob4.geta() << "\t b :" << ob4.getb();

    //demo sumob = operator+(obj1, obj2);

    return 0;
}

