#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int>  vc;//={1,2,3,4,5};
    //vector<int>  v2={6,7,8,9,10};
    cout << "Size: " << vc.size() << endl;
    cout << "Capacity of Vector: " << vc.capacity() << endl;  

    for(int i=1;i<10;i++){          // Add elements
       vc.push_back(i*10);
        //vc[i]=i*10;
    }
    /*for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    vc.empty();                    // to check empty or not
    vc.clear();                    // removes all the elements
    //vc.pop_back();                     // To remove last element
    cout << "\nSize: " << vc.size() << endl;
    cout << "Capacity of Vector : " << vc.capacity() << endl; 
    */

    cout<<"elements are: ";
    for(vector<int>::iterator itr=vc.begin();itr!=vc.end();itr++) { cout<<*itr<<" "; } cout<<endl;

    reverse(vc.begin(),vc.end());     //reverse vector

    cout<<"elements are: ";
    for(vector<int>::iterator itr=vc.begin();itr!=vc.end();itr++) { cout<<*itr<<" "; } cout<<endl;

    
    
    return 0;  
}
