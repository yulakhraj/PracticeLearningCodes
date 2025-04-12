#include <iostream>
using namespace std;

template <class T>
void mysort(T arr[], int size)
{
    T temp=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
template <class T > 
void display(T arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {23, 51, 55, 33, 88, 13};
    //char arr[]={'a','f','y','i'};
    //string arr[] ={"fish","strong","man","laptop"};
    int size = sizeof(arr) / sizeof(int);
    cout << "Before state:\n ";
    display(arr,size);
    //printarray(arr,size);
    cout<<"\nAfter State:\n ";
    mysort(arr,size);
    //sort(arr,arr+size);
    //printarray(arr,size);
    display(arr,size);
    return 0;
}