#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"the is is A class";
    }
};

class B{
    public:
    void show(){
        cout<<"the is is B class";
    }

};

class C{
    public:
    void show(){
        cout<<"the is is C class";
    }

};

class D: public A, public B, public C{
    public:
    void show(){
        cout<<"the is is D class";
    }
    
};
int main(){
    D ob;

    ob.A::show();
    cout<<endl;
    ob.show();


    return 0;
}
