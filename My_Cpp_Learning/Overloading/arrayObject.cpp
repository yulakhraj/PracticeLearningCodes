#include <iostream>
using namespace std;
// Array of objects 
class demo
{
private:
    int a;
    int b;
public:
    void seta(int a)
    {
        this->a = a;
    }
    int geta()
    {
        return(a);
    }
    void setb(int b)
    {
        this->b = b;
    }
    int getb()
    {
        return(b);
    }
};

int main()
{
    demo ob[2];
    ob[0].seta(10);
    ob[0].setb(20);

    ob[1].seta(100);
    ob[1].setb(100);

    cout << "\n Object1 : a :" << ob[0].geta() << "\t b:" << ob[0].getb();
    cout << "\n Object2 : a :" << ob[1].geta() << "\t b:" << ob[1].getb();

 

}