#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    cout<<endl<<"Arrays are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}
void ArrInput(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << endl << "Enter Arrays elements at position "<<i<<": ";
        cin >> arr[i];   
    }
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    cout<<endl<<"Enter arrays";
    ArrInput(arr,size);
    
    printArr(arr,size);

    int newArr[size];
    int firstElement = 0, lastElement = size - 1; 
    bool test = true;                                   
    for (int i = 0; i < size; i++) {
        if (test){
            newArr[i] = arr[lastElement--];
        }
        else{
            newArr[i] = arr[firstElement++];
        }   
        test = !test;
    }
    printArr(newArr,size);

}