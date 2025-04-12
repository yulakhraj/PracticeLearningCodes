#include <iostream>
using namespace std;
class A
{
public:
     virtual void show()=0;
     void display(){
        cout<<"\n displayeeeee";
     }
    
};
class B : public A
{
public:
    void show(){
        cout<<"\n only show()";
    }
    void show(int a, int b)                     
    {
        cout << "\n show(int a, int b) from class B";
        
    }
};
class C : public A
{
public:
    void show(float a, float b)                    
    {
        cout << "\n show() from class C";
    }
};
class D : public A
{
public:
    void show(int a, int b, int c)                   
    {
        cout << "\n show() from class D";
    }
};
int main()
{
    
    B ob;
    ob.show();
    ob.show(3,4);
    ob.display();
    
   
    
}
