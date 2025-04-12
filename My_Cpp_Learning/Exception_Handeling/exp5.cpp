
#include <bits/stdc++.h>
using namespace std;

class myexception : public exception {
private:
    const char* message;
public:
    myexception(const char* msg) : message(msg) {}
    virtual const char* what() const throw() {
        return message;
    }
};

class A
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
                throw myexception("Division by zero Exception");
            cout << "\n (a/b) : " << (a / b) << endl;
        }
        catch (myexception& excep)
        {
            cout << endl <<"voidf(1)"<< excep.what();
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
                throw myexception("\n Array Index out of bounds Exception");
            else
                cout << "\n arr[" << idx << "]=" << arr[idx] << endl;
        }
        catch (myexception& exp)
        {
            cout << endl <<"voidf(2)"
                 << exp.what();
        }
    }
};

class B : public A
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
                throw myexception("\n Invalid value entered");
            else
                cout << "\n i : " << i;
        }
        catch (myexception& exp)
        {
            cout << endl<<"voidf(3)"
                 << exp.what();
        }
    }
};

int main()
{
    try{
    B b;
    b.f1();
    b.f2();
    b.f3();
    }
    catch(...){
        cout<<endl<<"Main exception";
    }
    
}