#include<iostream>
using namespace std;
void myswap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int a = 10;
    int b = 20;

    cout<<"a= "<<a<<" b= "<<b<<endl;
    //swap(a,b);
    myswap(a,b);
    cout<<"a= "<<a<<" b= "<<b;

}

