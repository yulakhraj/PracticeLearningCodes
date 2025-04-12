#include<iostream>
#include <string>
using namespace std;

int main(){
    
    string a, b, m;
    // Prompting to user to insert values of A and B
    cout<< "Enter A: ";
    cin>> a;

    cout << "Enter B: ";
    cin >> b;
    /* Conversion taking place here
        1. Strings(a,b) -> to -> Int
        2. calculating their product
        3. then Int(product) -> to -> String
    */
    m = to_string(stoi(a)*stoi(b));

    // Printing the final output.
    cout << "\nA: " << a << "\nB: " << b;
    cout << "\nProduct: " << m;

 
}