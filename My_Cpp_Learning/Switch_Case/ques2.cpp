#include<iostream>
using namespace std;

int main(){
    int phy,chem,bio,math,comp,per;
    int grade;
    string name;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter phy marks: ";
    cin>>phy;
    cout<<"Enter chem marks: ";
    cin>>chem;
    cout<<"Enter bio marks: ";
    cin>>bio;
    cout<<"Enter math marks: ";
    cin>>math;
    cout<<"Enter comp marks: ";
    cin>>comp;
    per=(phy+chem+bio+math+comp)*100/500;
    
    if(per>=90)
        grade='A';
    else if(per>=80)
        grade='B';
    else if(per>=70)
        grade='C';
    else if(per>=60)
        grade='D';
    else if(per>=40)
        grade='E';
    else
        grade='F';
    cout<<"Percentage of "<<name<<" Marks is "<<per<<" and Grade is "<<grade<<endl;

}