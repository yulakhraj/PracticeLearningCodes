#include <iostream>
using namespace std;

template <class T > void display(T x)
{
    cout << "\n x : " << x ;
}

template <class T1, class T2> void display(T1 x, T2 y)
{
    cout << "\n x : " << x <<"\t y ="<<y;
}

 /* template<> void display<int>(int a)
{
    cout<<"\nprint a"<<a;
} */

/*  void display(int a){
    cout << "\n normal x : " << a ;
} */

int main()
{
    int i =12;
    float f = 12.4;
    display(i);
    display(f);
    display(i,f);
    

    return 0;
}

