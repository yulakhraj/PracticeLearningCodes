#pragma once
using namespace std;

//------------------insert string array and find element---------------------------------
void searchingelement(string* str,string key,int n) {
    
    for (int i = 0; i < n; i++) {
        if (key == str[i]) {
            cout << "element at index " << i;
        }
        
    }
}
void testing() {
    int n;
    string key;
    cout << "Enter no. of string: ";
    cin >> n;
    string* str = new string[n];

    cout << endl << "Enter the Strings: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "enter " << i << " index string:";
        cin >> *(str + i);
    }
    cout << endl << "elements are: ";
    for (int i = 0; i < n; i++) {
        cout << "element at " << i << " index string are :";
        cout << *(str + i) << endl;
    }
    cout << "enter the string you want to find:  ";
    cin >> key;
    searchingelement(str, key, n);
}
//--------------------------------------------------------------------------------------