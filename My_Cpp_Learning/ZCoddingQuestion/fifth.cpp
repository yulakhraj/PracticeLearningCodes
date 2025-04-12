#include <iostream>
using namespace std;
void smallInt(int array[], int size)
{
  // intializing
  int ans = 1;
  // iterating over array
  for (int i = 0; i < size; i++)
  {

    if (array[i] <= ans)
    {

      ans += array[i];
    }
  }
  cout << "Smallest positive integer value that cannot be represented as sum of elements : " << ans;
}
int main()
{
  cout << "Enter size of array : " << endl;
  int size;
  cin >> size;

  
  return 0;
}