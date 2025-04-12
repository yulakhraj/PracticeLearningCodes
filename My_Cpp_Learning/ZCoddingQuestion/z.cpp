#include <iostream>
#include <algorithm>
using namespace std;
// Functions to Print Array
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arrSize;
    int *arr = new int[arrSize];
    cout << "Enter the array size: ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cout << endl
             << "Enter Arrays elements at position " << i << ": ";
        cin >> arr[i]; //*(arr+i)
    }
    sort(arr,arr+arrSize);    // To Sort Array 
    cout << endl
         << "Before State Arrays are: ";
    printArr(arr, arrSize);

    int *newArr = new int[arrSize];
    int firstElement = 0, lastElement = arrSize - 1; // Taking index in array
    bool cond = true;

    for (int i = 0; i < arrSize; i++)
    {
        if (cond)
        {
            newArr[i] = arr[lastElement--];
        }
        else
        {
            newArr[i] = arr[firstElement++];
        }
        cond = !cond;
    }
    cout << endl
         << "After State Arrays are: ";
    printArr(newArr, arrSize);
}