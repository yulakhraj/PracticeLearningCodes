#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myfile("abc.txt");

    myfile<<"hello buddy and do your work ";

    myfile.close();
    
    return 0;
}