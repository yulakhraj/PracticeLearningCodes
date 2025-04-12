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
    A* ptr;

    while(true){
    cout << "\n Enter your choice (1-4) :";
    cin >> ch;
    //dynamic assignment of address of object to pointer to base class
    switch (ch)
    {
    case 1:
        A o1;
        ptr = &o1; 
        ptr->show(); //call class A version
        break;
    case 2:
        B o2;
        ptr=&o2;
        ptr->show(); //call class A version
        break;
    case 3:
        C o3;
        ptr = &o3;
        ptr->show(); //call class A version
        break;
    case 4:
        D o4;
        ptr = &o4;
        ptr->show(); //call class A version
        break;
    case 5:
        exit(1);
    }
    }
    return 0;
}