#include <iostream>
#include <string>
using namespace std;
int main() 
{       // string to array

    string str = "hello_world";
    char arr[10];
    for(int i=0;i<str.length();i++){
        arr[i]=str[i];
    }
    
    for(int i=0;i<str.length();i++){
        cout<<arr[i];
    }
    cout<<endl;
    string a="hello";
    string b="world";
    
    string c=a+b;
    cout<<c;
    
    
    
}