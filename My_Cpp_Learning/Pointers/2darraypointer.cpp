#include<iostream>
using namespace std;

/*void twodArray()
{
    int row, col;
    int** arr;
    cout << "\n How many rows : ";
    cin >> row;
    cout << "\n How many cols : ";
    cin >> col;
    arr = (int**)new int[row];       //first allocate memory for rows
    
    for (int i = 0; i < row; ++i)       //second allocate memory to each array
    {
        arr[i] = new int[col];
    }
    cout << "\n Enter elements to array : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "\n Enter elements for " << i << " row and " << j << " cols :";
            cin >> *(*(arr + i) + j);
        }
    }
    cout << "\n Entered elements to the array : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<< *(*(arr + i) + j)<<" ";
        }
        cout << endl;
    }
} */

int** readarr(int** arr, int row, int col)
{
    //first allocate memory for rows
    arr = (int**)new int[row];
    //second allocate memory to each array
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[col];
    }
    cout << "\n Enter elements to array : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << "\n Enter elements for " << i << " row and " << j << " cols :";
            cin >> *(*(arr + i) + j);
        }
    }
    return(arr);
}

void display(int** arr, int row, int col)
{
    cout << "\n Entered elements to the array : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<< *(*(arr + i) + j)<<" ";
        }
        cout << endl;
    }
}

int** sumArray(int** arr1 , int** arr2, int row, int col){
    int** sumArr = NULL;
    sumArr=(int**)new int[row];
    for (int i = 0; i < row; ++i)
    {
        sumArr[i] = new int[col];
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            *(*(sumArr + i) + j)=*(*(arr1 + i) + j) + *(*(arr2 + i) + j);
            
        }
        return(sumArr);
    }
}

int main()
{
    int row, col;
    int** arr1 = NULL;
    int** arr2 = NULL;
    
    cout << "\n How many rows : ";
    cin >> row;
    cout << "\n How many cols : ";
    cin >> col;
    arr1 = readarr(arr1, row, col);
    display(arr1, row, col);

    arr2 = readarr(arr2, row, col);
    display(arr2, row, col);

    int** sumArr = sumArray(arr1, arr2, row, col);

    display(sumArr, row, col);
    
}