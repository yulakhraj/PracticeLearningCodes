#include <iostream>
using namespace std;
                            
void show(float a, float b)    //type promotion of parameters/arguments
{
    cout << "\n a : " << a << "\t b : " << b;
}
int main()
{
    int a = 10, b = 20;
    short s1 = 12, s2 = 13;
    char ch1 = 'A', ch2 = 'B';
    long l1 = 1234, l2 = 4567;
    float f1 = 12.34f, f2 = 45.56f;
    double d1 = 12.34589975432222, d2 = 67.897454598479847;

    show(a, b);         //type promotion
    show(s1, s2);       //type promotion
    show(ch1, ch2);     //type promotion
    show(l1, l2);       //type promotion
    show(f1, f2);
    show(d1, d2);       //type demotion
}

