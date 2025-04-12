#include <iostream>
#include <functional>
using namespace std;
                                    //typedef
struct demo
{
private:
    int a;
    int b;
public:
    void initdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "\n a : " << a << "\t b : " << b;
    }
};

int main()
{
    typedef int integer;
    integer a = 10, b = 20;
    cout << "\n Sum : " << (a + b);
    //demo ob1;


 

}

 