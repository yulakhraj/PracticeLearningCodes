#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
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
void func(A &ref)
{
    ref.show();
}
int main()
{
    //when the bindingtakes place btween function call and function body.
    int ch;
    A o1;
    B o2;
    C o3;
    D o4;
    while(true){
    cout << "\n Enter your choice (1-4) :";
    cin >> ch;
    //dynamic assignment of address of object to pointer to base class
    switch (ch)
    {
    case 1: 
        func(o1); //call class A version
        break;
    case 2:
        func(o2); //call class A version
        break;
    case 3:
        func(o3); //call class A version
        break;
    case 4:
        func(o4); //call class A version
        break;
    }
    }
}

