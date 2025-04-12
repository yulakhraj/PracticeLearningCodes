#include <iostream>
using namespace std;
//                      Array of Function pointer

int sum(int x, int y)
{
    return(x + y);
}
int diff(int x, int y)
{
    return(x - y);
}
int prod(int x, int y)
{
    return(x * y);
}
int rem(int x, int y)
{
    return(x % y);
}
void operations(int (*fp)(int, int))
{
    cout << "\n Address : " << (uintptr_t)fp << "\t Returned value : " << fp(20, 9);
}


int main()
{
    int (*arr[4])(int, int);

    int (*fp1)(int, int);
    fp1 = sum;
    int (*fp2)(int, int);
    fp2 = diff;
    int (*fp3)(int, int);
    fp3 = prod;
    int (*fp4)(int, int);
    fp4 = rem;

    arr[0] = fp1;
    arr[1] = fp2;
    arr[2] = fp3;
    arr[3] = fp4;

    cout<<"\n fp1: "<<(uintptr_t)fp1;
    cout<<"\n fp2: "<<(uintptr_t)fp2;
    cout<<"\n fp3: "<<(uintptr_t)fp3;
    cout<<"\n fp4: "<<(uintptr_t)fp4;

    cout<<"\n arr[0]: "<<(uintptr_t)arr[0];
    cout<<"\n arr[1]: "<<(uintptr_t)arr[1];
    cout<<"\n arr[2]: "<<(uintptr_t)arr[2];
    cout<<"\n arr[3]: "<<(uintptr_t)arr[3];

}