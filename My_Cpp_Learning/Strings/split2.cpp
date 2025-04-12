#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string S,T;
    cout<<"Enter the string: ";
    getline(cin,S);
    stringstream X(S);
	//int i=0;
    
	while (getline(X, T, ' ')){
	    cout<<T<<endl;
	}
}