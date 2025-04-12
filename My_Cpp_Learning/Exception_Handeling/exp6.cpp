#include <iostream>
using namespace std;

class myexception : public exception
{
public:
    const char *what(const char *msg) const throw()
    {
        return (msg);
    }
};

class mybase
{
public:
    void f1()
    {
        try
        {
            int a, b;
            cout << "\n Enter a : ";
            cin >> a;
            cout << "\n Enter b : ";
            cin >> b;
            if (b == 0)
            {
                myexception ex;
                throw ex;
            }
            cout << "\n (a/b) : " << (a / b) << endl;
        }
        catch (myexception &excp)
        {
            const char *str = "Division by zero";
            cout << endl
                 << "Base class Exception:" << excp.what(str);
        }
    }
    void f2()
    {
        try
        {
            int arr[] = {1, 2, 3, 4, 5};
            int idx;
            cout << "\n Enter index of the array to fetch: ";
            cin >> idx;

            if ((idx >= 5) || (idx < 0))
            {
                myexception ex;
                throw ex;
            }

            else
                cout << "\n arr[" << idx << "]=" << arr[idx] << endl;
        }
        catch (myexception &exp)
        {
            const char *str = "Index out of Bounds";
            cout << endl
                 << "Base class Exception: " << exp.what(str);
        }
    }
};

class myderived : public mybase
{
public:
    void f3()
    {
        try
        {
            cout << INT_MAX << "\t" << INT_MIN;
            int i;
            cout << "\n Enter i :";
            cin >> i;
            if ((i > 10) || (i < 1))
            {
                myexception ex;
                throw ex;
            }
            else
                cout << "\n i : " << i;
        }
        catch (myexception &exp)
        {
            const char *str = "Invalid value";
            cout << endl
                 << "\n Derived Exception : " << exp.what(str);
        }
    }
};
int main()
{
    try
    {
        myderived ob2;
        ob2.f1();
        ob2.f2();
        ob2.f3();
    }
    catch (...)
    {
        cout << "\n Main Exception occured";
    }
}