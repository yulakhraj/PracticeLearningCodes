#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "\n Show() from class A";
    }
};

class B : public A
{
public:
    void show() //override
    {
        cout << "\n show() from class B";
    }
};

class C : public A
{
public:
    void show() //override
    {
        cout << "\n show() from class C";
    }
};

class D : public A
{
public:
    void show() //override
    {
        cout << "\n show() from class D";
    }
};
//all function call is early binding ie. at compile time
int main()
{
    int ch;
    cout << "\n Enter your choice (1-4) :";
    cin >> ch;
    switch (ch)
    {
    case 1:
        A o1;
        o1.show();
        break;
    case 2:
        B o2;
        o2.show();
        break;
    case 3:
        C o3;
        o3.show();
        break;
    case 4:
        D o4;
        o4.show();
        break;
    }
}