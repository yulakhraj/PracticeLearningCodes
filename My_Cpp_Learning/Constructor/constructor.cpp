#include<string>
#include<iostream>
using namespace std;
class demo
{
private:
    int a;
    int b;
public:
    demo()           //default and do nothing constructor
    {
        cout << endl << "\n Default Constructor Called";
    }
    demo(int a,int b)     //parameterized constructor
    {
        cout << endl << "\n Parameterized Constructor called";
        this->a = a;
        this->b = b;
    }
    demo(demo &ref)     // copy constructor
    {
        cout<< "\n Copy Constructor Called";
        this->a=ref.a;
        this->b=ref.b;
    }
   
    demo sum(demo tob){
        int ta = this->a + tob.a;
        int tb = this->b + tob.b;
        demo temp(ta,tb);
        return(temp);
    }
    void display()
    {
        cout << "\n a: " << a << " b: "<<b;
    }

};


int main(){
    
    demo o1(10,20);
    demo o2(20,30);

    demo o3;
    o3=o1.sum(o2);

    o3.display();
    //demo obj1;

    //demo obj2(20);
    //obj2.display();

    //demo obj3(obj2);
    //obj3.display();
    

}