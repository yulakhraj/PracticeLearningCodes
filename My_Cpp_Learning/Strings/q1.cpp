// to reverse an string
/* i/p-- hello world to manish
*  o/p-- hsinam ot dlrow olleh
*  o/p-- olleh dlrow ot hsinam
*  o/p-- manish to world hello
*/

#include<iostream>
using namespace std;
void reversemethod1(string &str){
    int length=str.length();
    for(int i=0;i<length/2;i++){
        char temp = str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
}
void rev(string str){
    for(int i=str.length();i>0;i--){
        cout<<str[i];
    }
}


int main(){
    string str="hello world";
    //cout<<"Enter the String: ";   getline(cin,str);

    //reversemethod1(str);
    rev(str);
    cout<<str<<endl;


}