#pragma once
using namespace std;

void callbyval(int a, int b)
{
    cout << "\n Address of a in callbyvalue: " << (uintptr_t)&a;
    cout << "\n Address of b in callbyvalue: " << (uintptr_t)&b;
    ++a;
    ++b;
    cout << "\n a = " << a << "\t b = " << b;
}

void callbyaddr(int* pa, int* pb)
{
    cout << "\n Address of pa : " << (uintptr_t)&pa;
    cout << "\n Address of pb : " << (uintptr_t)&pb;

    cout << "\n Address of a in callbyaddr(): " << (uintptr_t)pa;
    cout << "\n Address of b in callbyaddr(): " << (uintptr_t)pb;


    ++(*pa);
    ++(*pb);
    cout << "\n a = " << *pa << "\t b = " << *pb;
}

void callbyref(int& a, int& b)
{
    cout << "\n Address of a in callbyref(): " << (uintptr_t)&a;
    cout << "\n Address of b in callbyref(): " << (uintptr_t)&b;

    ++a;
    ++b;
    cout << "\n a = " << a << "\t b = " << b;
}

void callfunc()
{
    int a, b;
    cout << "\n Enter an integer a : ";
    cin >> a;
    cout << "\n Enter an integer b: ";
    cin >> b;

    cout << "\n Address of a in main() : " << (uintptr_t)&a;
    cout << "\n Address of b in main(): " << (uintptr_t)&b;

    cout << "\n Before Call by Value \n";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;
    callbyval(a, b);
    cout << "\n After call by value ";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;


    cout << "\n Before Call by Address \n";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;
    callbyaddr(&a, &b);
    cout << "\n After call by value ";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;


    cout << "\n Before Call by Reference \n";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;
    callbyref(a, b);
    cout << "\n After call by value ";
    cout << "\n Value of a in main() : " << a;
    cout << "\n Value of b in main(): " << b;
}