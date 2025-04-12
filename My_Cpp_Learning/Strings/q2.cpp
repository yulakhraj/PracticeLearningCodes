//  play with strings

#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }
    
    cout<<"String is: "<<str<<endl;
    cout<<"length of string: "<<count<<endl;
    cout<<"length of string: "<<str.length()<<endl;
    cout<<"length of string: "<<str.size();



}