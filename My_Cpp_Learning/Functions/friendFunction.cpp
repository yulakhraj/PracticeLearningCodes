#include <iostream>
using namespace std;
class sample
{
private:
    int a;
    int b;
public:
    void setab(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void show(sample ob);
};
void show(sample ob)
{
    cout << "\n a : " << ob.a << "\tb :" << ob.b;
}

int main()
{
    sample ob;
    ob.setab(10, 20);
    show(ob);
    return 0;
}