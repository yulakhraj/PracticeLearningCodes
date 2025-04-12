#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ll;                               // Declation Type
    //list<int> llit{1,2,3,4,5};                // Declation Type
    //list<int> llist={1,2,3,4,5};              // Declation Type

    for(int i=1;i<10;i++){
        ll.push_back(i*10);                     // Adding elements
    }
    cout<<"\nElements are: ";
    for(list<int>::iterator itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<" ";
    }
    //ll.push_front(5);                     // to add element at front

    ll.insert(ll.begin(),24);               // to insert element

    //ll.pop_back();
    //ll.pop_front();
    

    //cout<<ll.size()<<endl;
    //cout<<ll.max_size()<<endl;

    //list<int> ls2;                                                                
    //ls2.splice(ls2.begin(), ll, ll.begin(), next( ll.begin(), ll.size()/2) );     // To split

    // auto middle = next(ll.begin(), ll.size() / 2);                               // To split
    // list<int> lst2(ll.begin(), middle);
    // list<int> lst3(middle, ll.end());
    
    //for (const auto &s : ll ) std::cout << s << ' ';                              //to print 



    cout<<"\nElements are: ";
    for(list<int>::iterator itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<" ";
    }
}