#include<iostream>
#include<set>
#include <iterator>
using namespace std;

int main(){
    set<int> myset;
    set<int>::iterator itr;
    set<int>::reverse_iterator it;
    for (int i = 1; i < 10; i++) { myset.insert(i*3); }

    //st.insert(9); // not added becuase of Set
    //for( itr=st.begin(); itr!=st.end(); itr++) { cout<<*itr<<" "; }

    // cout<<endl;
    // if(st.find(9)!=st.end()){
    //     cout<<"present";
    // }else{
    //     cout<<"not present";
    // }

    // bool val = st.empty();
    // cout<<endl<<val;

    //set<int> myset{10,50,30,40,20};
    
    for( itr=myset.begin(); itr!=myset.end(); itr++) { cout<<*itr<<" "; }
    cout<<endl;
    for( it=myset.rbegin(); it!=myset.rend(); it++) { cout<<*it<<" "; }

    





    return 0;
}