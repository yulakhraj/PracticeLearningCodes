#include <iostream>
using namespace std;
//default aruguments

//optional are always listed at right hand side, first come the mandatory

void display(int x, int y=0, int z=0)   //all three arguments are optional
{
    cout << "\n x =" << x << "\t y =" << y << "\t z =" << z;
}
int main()
{
    display(10);
    display(10, 20);
    display(10, 30, 40);
return 0;
}