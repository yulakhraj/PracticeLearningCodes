#include <iostream>
using namespace std;
void show()
{
    int a = 10, b = 20;
    cout << "\n show() -> a = " << a << "\t b = " << b;
}
void show(int a, int b)
{
    cout << "\n show(int, int) -> a = " << a << "\t b = " << b;
}
void show(int a, int b, int c)
{
    cout << "\n show(int, int, int) -> a = " << a << "\t b = " << b<<"\t c = "<<c;
}
float show(int a, float b)
{
    cout << "\n show(int, float) : ";
    return(a + b);
}

float show(float a, int b)
{
    cout << "\n show(float, int) : ";
    return(a + b);
}
int main()
{
    show();
    show(1, 2);
    show(1, 2, 3);
    cout << "\n show(int, float) :" << show(10, 2.5f);
    cout << "\n show(float, int) :" << show(5.6f, 2);
}