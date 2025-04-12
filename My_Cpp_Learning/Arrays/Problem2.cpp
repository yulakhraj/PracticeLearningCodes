#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, -3, 2, -5, 1, -6, 7, -4, 9, -8};
    vector<int> result(arr.size());
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] < 0)
        {
            result[i] = arr[j];
            i += 2;
        }
    }

    i = 1;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] >= 0)
        {
            result[i] = arr[j];
            i += 2;
        }
    }

    cout << "Original array: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Rearranged array: ";
    for (int elem : result)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}