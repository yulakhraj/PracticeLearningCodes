#include <iostream>
using namespace std;

int main()
{
    int row, coll;
    int **arr1 = NULL;
    int **arr2 = NULL;
    int **arr3 = NULL;
    cout << "Enter the rows : ";
    cin >> row;
    cout << "Enter the coll : ";
    cin >> coll;

    arr1 = (int **)new int[row];        // Allocate memory for the 2D arrays using the new operator
    arr2 = (int **)new int[row];        // pointer to integer
    arr3 = (int **)new int[row];
    for (int i = 0; i < row; ++i)
    {
        arr1[i] = new int[coll];        // Allocate memory for each array 
        arr2[i] = new int[coll];
        arr3[i] = new int[coll];
    }

    cout << "enter the array 1 details: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coll; j++)
        {
            cin >> *(*(arr1 + i) + j);
        }
    }
    cout << "\n After State Array1 are : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < coll; ++j)
        {
            cout << *(*(arr1 + i) + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "enter the array 2 details: \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coll; j++)
        {
            cin >> *(*(arr2 + i) + j);
        }
    }
    cout << "\n After State array2 are : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < coll; ++j)
        {
            cout << *(*(arr2 + i) + j) << " ";
        }
        cout << endl;
    }
    // doing multiplication
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coll; j++)
        {
            *(*(arr3 + i) + j) = (*(*(arr1 + i) + j)) * (*(*(arr2 + i) + j));
        }
    }

    cout << "\n After Multiplication arrays are : " << endl;
    
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < coll; ++j)
        {
            cout << *(*(arr3 + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}

    // int row, coll;
    // int **arr1 = NULL;
    // int **arr2 = NULL;
    // int **arr3 = NULL;
    // cout << "Enter the rows : ";
    // cin >> row;
    // cout << "Enter the coll : ";
    // cin >> coll;
    // arr1 = (int **)new int[row];        
    // arr2 = (int **)new int[row];        
    // arr3 = (int **)new int[row];
    // for (int i = 0; i < row; ++i)
    // {
    //     arr1[i] = new int[coll];         
    //     arr2[i] = new int[coll];
    //     arr3[i] = new int[coll];
    // }