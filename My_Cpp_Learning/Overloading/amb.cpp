#include <iostream>
using namespace std;

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
    int a = 10;
    int b = 20;
    cout << "\n show(int, float) :";
    //show(a,b);                    //abmigious call as both function definition qualify for the call
}