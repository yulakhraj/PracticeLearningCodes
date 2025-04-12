#include <bits/stdc++.h>
using namespace std;
int division(int a,int b)
{
    if(b==0){
        throw "Attempted to divide zero";
    }
    return (a/b);
}
int main(){
    int a,b,k;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    try{
    k=division(a,b);
    cout<<k;

    }catch(const char* e){
        cout<<e;
    }



    return 0;
}