
using namespace std;
void second() {
    int n;
    int* arr;
    int* prr;
    int* trr;
    cout << "\nEnter array size: ";
    cin >> n;
    arr = new int[n];
    prr = new int[n];
    trr = new int[n];
    
    cout << "\nEnter 1st array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    cout << "\nEnter 2nd array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(prr + i);
    }
    for (int i = 0; i < n; i++) {
        *(trr + 1) = *(arr + i) + *(prr + i);
    }
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << endl << "\nAddress of " << i << " Element: " << (uintptr_t)(trr + i) << "\tValue: " << *(trr + i);
    }

}
//-------------------1st question read and print-------------------------------------------------------
void first() {
    int n;
    int* arr;
    cout << "\nEnter array size: ";
    cin >> n;
    arr = new int[n];

    cout << "\nEnter array element: ";
    for (int i = 0; i < n; i++) {
        
        cin >> *(arr + i);
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++) {
        cout << endl << "\nAddress of " << i << " Element: " << (uintptr_t)(arr + i) << "\tValue: " << *(arr + i);
    }
}

//--------------------------------------------------------------------------------------------------------

void twodArray()
{
    int row, col;
    int** arr;
    cout << "\n How many rows : ";
    cin >> row;
    cout << "\n How many cols : ";
    cin >> col;
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
    cout << "\n Entered elements to the array are : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout <<""<< *(*(arr + i) + j)<<" ";
        }
        cout << endl;
    }
}

//-------------------------------------------------------------------------------------------------------
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

void disparr(int** arr, int row, int col)
{
    cout << "\n Entered elements to the array : " << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << " " << *(*(arr + i) + j);
        }
        cout << endl;
    }
}


void twoDarrayoperations()
{
    int row, col;
    int** arr = NULL;
    cout << "\n How many rows : ";
    cin >> row;
    cout << "\n How many cols : ";
    cin >> col;
    arr = readarr(arr, row, col);
    disparr(arr, row, col);
}

//-------------------------------------------------------------------------------------------------------
