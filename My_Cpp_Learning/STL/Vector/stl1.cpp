#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int>::iterator it;
    //vector<int> v1{6,7,8,9,10};
    for(int i=1;i<10;i++){
        v.push_back(i*10);
    }
    cout<<"enter the elemnts are:";
    
    for(int i=1;i<10;i++)
    
    cout<<"\nElements are: ";
    for(vector<int>::iterator itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    
    //v.insert(v.end(),v1.begin(),v1.begin()+5);           // To insert vector into another vector
           
    //v.insert(v.begin(),v1.begin(),v1.end());             // To insert at front position

    //v.insert(v.begin()+2,v1.begin(),v1.end());           // To insert at specific position 2nd
    
    //v.erase(v.begin()+2);                                // To delete at element

    //v.erase(v.begin(),v.begin()+2);                      // To delete specific index

    //v.pop_back();                                        // To remove last element

    //v.empty();                                           // to check empty or not

    //v.clear();                                           // removes all the elements

    cout<<"\nElements are: ";
    for(vector<int>::iterator itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }

    it=v.begin();

    
    return 0;
}