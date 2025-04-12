#pragma once
using namespace std;
void f1()
{
    char ch = 'A', * pch = &ch;
    int i = 5, * pi = &i;
    float f = 5.5, * pf = &f;
    double d = 0.002345, * pd = &d;

    cout << endl << sizeof(long long);
    cout << endl << sizeof(ch) << "\t" << sizeof(pch);
    cout << endl << sizeof(i) << "\t" << sizeof(pi);
    cout << endl << sizeof(f) << "\t" << sizeof(pf);
    cout << endl << sizeof(d) << "\t" << sizeof(pd);
}
//---------------------------------------------------------------------------------
int* f2() //function returning a pointer
{
    int x = 100; //local to f2
    cout << "\n Address of x : " << (uintptr_t)&x << "\t Value : " << x;
    return(&x);
}
//---------------------------------------------------------------------------------

void f3()
{
    int* p = f2(); //catching the address returned by f2()
    cout << "\n Address : " << (uintptr_t)p << "\t Value : " << (uintptr_t)*p; //dereferncing p
}
//---------------------------------------------------------------------------------

void f4()
{
    int arr[] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; ++i)
        cout << endl << "\n Address of " << i << " element : " << (uintptr_t)(arr + i) << "\t Value : " << *(arr + i);
    /*
        (arr+i) --> base address of array(arr) + (i * sizeof(array type))
    */
}

//------------------input and output array through pointer---------------------------------------------
void f5() {
    int arr[5];
    int* ptr[5];
    cout << "Enter 5 number for array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = &arr[i];
    }
    cout << "5 number for array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr[i]<<" ";
    }

}
//------------------input and output array through pointer---------------------------------------------
void f6() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> *(arr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
}
//---------------------addition-----------------------------------------------
void f7() {
    int arr[5] = { 10,20,30,40,50 };
    int prr[5] = { 1,2,3,4,5 };
    int trr[5];
    for (int i = 0; i < 5; i++) {
        trr[i] = arr[i] + prr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(trr + i) << " ";
    }
}

