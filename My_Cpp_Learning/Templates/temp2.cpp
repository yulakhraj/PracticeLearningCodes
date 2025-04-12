#include <iostream>
using namespace std;

template <class T>
void display(T x){
    cout<<"\nx= "<<x;
}
template <typename T1, typename T2> 
void display(T1 x, T2 y){
    cout<<"\nfirst ele= "<<x;
    cout<<"\nsecond ele= "<<y;
    //cout<<"\n sum= "<<(x+y);
}
template <class T> 
void swap1(T &x, T &y){
    T temp;
    temp=x;
    x=y;
    y=temp;

}
int main(){
    int i=10;
    float f= 2.5;
    //display(i);
    //display(f);
    //display(i,f);

    int a=20,b=30;
    cout<<"before swap";
    display(a,b);
    cout<<"\nafter swap";
    swap1(a,b);
    display(a,b);

    return 0;
}