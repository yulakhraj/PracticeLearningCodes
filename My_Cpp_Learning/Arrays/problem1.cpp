#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
// Find duplicate array element
int main() {
    int arr[]={33,22,11,34,15,25,11,78,33};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+size);
    /*
    int temp=0;
    for(int i=0;i<size;++i){
        for(int j=i+1;j<size;++j){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } */
    
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /*
    set<int> st;
    set<int>::iterator itr;
    for(int i=0;i<size;++i){
        st.insert(arr[i]);
    }
    for( itr=st.begin(); itr!=st.end(); itr++) { cout<<*itr<<" "; } */

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}