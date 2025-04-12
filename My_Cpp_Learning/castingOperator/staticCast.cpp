#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int num = 10;
    double num2 = static_cast<double>(num);

    cout<<num<<endl;
    //cout<<num2<<endl;
    cout<<typeid(num).name() << endl;
    
}