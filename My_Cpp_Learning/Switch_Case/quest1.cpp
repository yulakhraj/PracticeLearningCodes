#include<iostream>
using namespace std;

int main(){
    char opr;
    int num1,num2;
    cout<<"enter operator like(+,-,/,*): ";
    cin>>opr;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;

    switch(opr){
        case '+':
            cout<<"sum of "<<num1<<" and "<<num2<<" is "<<num1+num2;
            break;
        case '-':
            cout<<"minus of "<<num1<<" and "<<num2<<" is "<<num1-num2;
            break;
        case '/':
            cout<<"division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
            break;
        case '*':
            cout<<"multiply of "<<num1<<" and "<<num2<<" is "<<num1*num2;
            break;
        default:
            cout<<"please enter operator like +,-,/,*";
            cout<<"invalid operator";
            break;

    }

}