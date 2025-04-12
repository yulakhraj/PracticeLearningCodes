#include<iostream>
using namespace std;
void fibonacci(int n){
    int first=0;
    int second=1;
    int third;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n;i++){
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
}
int main(){
    int n=5;  // 0 1 1 2 3 5 8
    fibonacci(n);

}