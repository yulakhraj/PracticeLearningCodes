#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    string mytext;
    ifstream myreadfile("abc.txt");

    while(getline(myreadfile,mytext)){
        cout<<mytext;
    }
    
    myreadfile.close();
    return 0;
}