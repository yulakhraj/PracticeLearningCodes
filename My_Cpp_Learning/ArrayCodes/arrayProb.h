using namespace std;

void ArrInput(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << endl << "Enter Arrays elements at position " << i << ": ";
        cin >> *(arr + i);
    }
}

void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void myProblem()
{
    int arrSize;
    cout << "Enter the array size: ";
    cin >> arrSize;
    int* arr = new int[arrSize];

    ArrInput(arr, arrSize);
   
    cout << endl << "Original Arrays are: ";
    printArr(arr, arrSize);
    
    sortArray(arr, arrSize);
    
    cout << endl << "Before State Arrays are: ";
    printArr(arr, arrSize);
    

    int* newArr = new int[arrSize];

    int firstElement = 0, lastElement = arrSize - 1;

    bool test = true;

    for (int i = 0; i < arrSize; i++)
    {
        if (test)
        {
            newArr[i] = arr[lastElement--];             // lastElement (decreasing index)
        }
        else
        {
            newArr[i] = arr[firstElement++];            // firstElement (incresing index)
        }
        test = !test;
    }
    cout << endl << "After State Arrays are: ";
    printArr(newArr, arrSize);
    
}
