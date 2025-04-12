#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create two arrays of numbers
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    // Create a third array to store the sum of the two arrays
    int arr3[5];
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    // Print the sum of the two arrays
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }

    cout << endl;

    return 0;

}