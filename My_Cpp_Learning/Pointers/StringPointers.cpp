#include <iostream>
using namespace std;
int main() {
    int n;
    string* str= new string[n];
    cout<<"Enter no. of string: ";
    cin>>n;
    
    cout<<endl<<"Enter the Strings: ";
    for(int i=0;i<n;i++){
        cin>> *(str+i);
    }
    cout<<endl<<"elements are: ";
    for(int i=0;i<n;i++){
        cout<< *(str+i)<<endl;
    }
}