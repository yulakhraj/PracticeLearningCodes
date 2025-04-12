#include<iostream>
using namespace std;

int main()
{  //case 1
    cout << "case 1" << endl;
    int i1 = 10;
    int& ri1 = i1;
    cout << "before changes :" <<"i1="<<i1 << " " <<"ri1=" << ri1 << endl;
    ri1 = 23;       //possible to do changes
    cout << "before changes :" << "i1=" << i1 << " " << "ri1=" << ri1 << endl;

    //case 2
    cout << "case 2" << endl;
    int i2 = 10;
    const int& ri2 = i2;
    cout << "before changes :" << "i2=" << i2 << " " << "ri2=" << ri2 << endl;
    //ri2 = 23;     //we can not made changes through consant 
    i2 = 23;
    cout << "before changes :" << "i2=" << i2 << " " << "ri2=" << ri2 << endl;

    //case 3
    cout << "case 4" << endl;
    const int i3 = 10;
    const int& ri3 = i3;
    cout << "before changes :" << "i3=" << i3 << " " << "ri3=" << ri3 << endl;
    //ri3 = 23;     //we can not made changes through consant 
    //i3 = 23;      //we can not made changes through consant
    cout << "before changes :" << "i3=" << i3 << " " << "ri3=" << ri3 << endl;

    //case 4
    cout << "case 4" << endl;
    const int i4 = 10;
    //int& ri4 = i4;    // not allwoed restrited to non-restrited 
    cout << "before changes :" << "i4=" << i4 << endl;
    
    
    return 0;
}