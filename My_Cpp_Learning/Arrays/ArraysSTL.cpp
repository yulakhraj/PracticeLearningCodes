#include <iostream>
#include <array>
using namespace std;
int main()
{
  int marks[10] = {23, 45, 67, 79, 21}; // marks array declaration
  int *ptr;                             // integer pointer declaration
  ptr = marks;                          // both marks and ptr pointing to the same element..

  cout << "The value of *ptr is :" << *(ptr + 1) << endl;
  cout << "The value of *marks is :" << marks << endl;
  int arry[5] = {10, 20, 30, 40, 50};

  int a = sizeof(arry) / sizeof(int);
  cout << "Size of array is: " << a;
  int size;
  cin >> size;
  // int *arr = new int[size];

  cout << "Arrays Learning!\n";
  array<int, 5> arr = {1, 2, 3, 4, 5};
  int size = arr.size();
  cout << "Size of array: " << size << endl;
  cout << "Elements of array are: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}