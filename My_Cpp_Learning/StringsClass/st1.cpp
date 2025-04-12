#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s1="Hello World ";
    string s2("Pune  City");
    string s3="orl";
    char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char ar1[] = "Welcome to C++ Programming";
    char ar2[] = "Welcome to Java Programming";
    char chr[30];
    // 1. Take input and print
        // cout<<"enter the string: ";
        // getline(cin,chr);
        // cin.get(str,30);
        // cout<<chr;

    //cout<<s1.size();              //length of string
    //cout<<strlen(ar1)<<endl;      //length of string
    //cout<<s1.length();
    //cout<<s1.capacity();          // capacity of string

    // 2. strcat() -->To add to char array
        //strcat(s1,s2);
        //strcat(ar1,ar2);              //ar2 added in ar1
        //cout<<ar1<<endl;

    // 3. append() --> To add in string
        // s1.append(s2);
        // cout<<s1;

    // 4. + --> for concatenation
        // s1=s1+s2;
        // cout<<s1;

    // 5. push_back()  --> add in last
        // s1.push_back('g');
        // cout<<s1;

    // 6. pop_back() --> remove at last
        // s2.pop_back();
        // cout<<s1;

    // 7. resize() --> reduce the size of string
        //s1.resize(5);

    // 8. To Compare string is equal or not
        // int k = s1.compare(s2);
        // if ((k==0))
        // {
        //     cout<<"equal";
        // }else{
        //     cout<<"not equal";
        // }

    // 9. swap()  --> to swap strings
        //s1.swap(s2);  
    
    // 10. find()  --> To find substring
        // int i = s1.find(s3);
        // if(i!=string::npos){        // substring is not found.
        //     cout<<i;
        // }else{
        //     cout<<"-1";
        // }

    //11. 

    return 0;
}