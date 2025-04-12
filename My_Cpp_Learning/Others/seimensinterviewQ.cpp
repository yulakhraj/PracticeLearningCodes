#include <iostream>
using namespace std;

int main() {
    int arr[]={1,0,2,3,0,5,7};
    int s=sizeof(arr)/sizeof(int);
    int* newarr = new int[s];
    
    int i=0;
    for(int j=0;j<s;j++){
        if(arr[i]==0){
            newarr[j]=arr[i];
            newarr[j+1]=arr[i];
            i++;j++;
        }else{
            newarr[j]=arr[i];
            i++;        
        }
    }
    for(int k=0;k<s;k++){
        cout<<newarr[k]<<" ";
    }
  return 0;  
}