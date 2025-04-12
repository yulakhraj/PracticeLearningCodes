#include <iostream>
using namespace std;

template < class T > T add(T &a, T &b){
    T result = a+b;
    cout<<result;
    //return a+b;
}


int main() {
    int x=10,y=20;
    cout<<add(x,y);
   
}