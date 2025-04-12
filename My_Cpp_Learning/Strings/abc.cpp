#include<iostream>
using namespace std;
int main(){
    string bike = "this is pulsor ns160";
    cout<< bike<<endl;
    //string data ="best 160cc segment bike";
    string newbike= bike.append("best 160cc segment bike");
    cout<<newbike<<endl;
    string first ="hello boy";
    string second="how are you";
    string final = first+" "+second;
    cout<<final;
}