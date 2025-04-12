//overridding
#include <iostream>
using namespace std;
                           
class super1                //funtion overloading in same class
{
public:
    void show(int x, int y)
    {
        cout << "\n show(int, int) - > x: " << x << "\t y : " << y;
    }
    void show(int x, int y, int z) 
    {
        cout << "\n show(int, int, int) - > x: " << x << "\t y : " << y <<"\t z : "<<z;
    }
    void show(int x, float y) 
    {
        cout << "\n Super3 funtion called";
        cout << "\n show(int, float) - > x: " << x << "\t y : " << y;
    }
};

int main()
{
    int a = 10, b = 20, c = 30;
    float f = 2.5f;
    super1 ob;
    ob.show(a, b);
    ob.show(a, b, c);
    ob.show(a, f);
}

 