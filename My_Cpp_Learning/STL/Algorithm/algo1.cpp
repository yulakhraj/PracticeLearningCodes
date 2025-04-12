//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int>::iterator itr;
    for (int i = 1; i < 10; i++)
    {
        v1.push_back(i * 10);
    }
    v1.push_back(50);
    // for (int i = 1; i < 10; i++)
    // {
    //     v2.push_back(i * 5);
    // }
    cout << "\nElements of v1 are: ";
    for (itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *itr << " ";
    }
    // cout << "\nElements of v2 are: ";
    // for (itr = v2.begin(); itr != v2.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // if (binary_search(v.begin(), v.end(), 40))
    // {
    //     cout << "40 found" << endl;
    // }
    // else
    // {
    //     cout << "40 not found" << endl;
    // }

    //sort(v.begin(), v.end());
    //sort(v1.begin(), v1.end());
    
    //merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    // cout << "\nElements of v3 are: ";
    // for (itr = v3.begin(); itr != v3.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    //for (const auto &s : v1 ) std::cout << s << ' ';

    //advance(itr,2);    // itr position changed to plus 2
    







    return 0;
}