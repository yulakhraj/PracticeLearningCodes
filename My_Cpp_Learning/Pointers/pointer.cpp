#include <iostream>
using namespace std;
void addition(int* a1, int* a2, int* res, int size){
    for(int i=0;i<size;i++){
        *(res+i) = *(a1+i) + *(a2+i);
    }
}
void display(int* arr, int size){
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }
}

int main() {
    int size=5;
    //cin>>size;
    //int arr[size], prr[size];
    int arr[size] = { 1, 2, 3, 4, 5 };
    int prr[size] = { 6, 7, 8, 9, 10 };
    int trr[size];
    
    addition(arr,prr,trr,size);
    display(trr,size);
    
}