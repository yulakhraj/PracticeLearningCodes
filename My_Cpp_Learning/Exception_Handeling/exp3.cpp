#include <iostream>
using namespace std;
void f1()
{
    int a, b;
    cout << "\n Enter a : ";
    cin >> a;
    cout << "\n Enter b : ";
    cin >> b;
    if (b == 0)
        throw "Division by zero Exception";
    cout << "\n (a/b) : " << (a / b) << endl;
}

void f2()
{
    int arr[] = { 1,2,3,4,5 };
    int idx;
    cout << "\n Enter index of the array to fetch: ";
    cin >> idx;
    if ((idx >= 5) || (idx < 0))
        throw "\n Array Index out of bounds Exception";
    else
        cout << "\n arr[" << idx << "]=" << arr[idx] << endl;
}

void f3()
{
    cout << INT_MAX << "\t" << INT_MIN;
    int i;
    cout << "\n Enter i :";
    cin >> i;
    if ((i > 10) || (i < 1))
        throw "\n Invalid value entered";
    else
        cout << "\n i : " << i;
}
int main()
{
    try
    {
        f1();
        f2();
        f3();
    }
    catch (const char* msg) //common handler for all types of exceptions
    {
        cout << "\n" <<msg;
    }
}

