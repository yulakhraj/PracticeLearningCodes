#include<iostream>
using namespace std;
class X{
int i;
public:
    X(){
        cout<<"default"<<endl;
    }
    X(int i){
        this->i=i;
        cout<<i<<endl;
        cout<<"parametrised";
    }
    X(X &ref ){
        this->i=ref.i;
        cout<<"\ncopy constructor"<<endl;
    }
    
};
class A
{
    int arr[3];
public:
    A(int a, int b, int c) :arr{ a,b,c } {};
    void show()
    {
        cout << endl;
        for (int i : arr)
        {
            cout << "\t" << i;
        }
    }
};
int main(){


    int i1=10;          // Variable declaration
    int i2(20);         // Variable declaration
    int i3{30};         // Variable declaration
    cout<<"\ni1="<<i1<<" i2="<<i2<<" i3="<<i3<<endl;


    X x1{};         // Object creation
    X x2{20};       // object creation with value
    X x3{x2};       // object crteation with copy constructor
    A a(1,2,3);     // adding values to the array which is in class
    a.show();
    
    
    
    return 0;
}