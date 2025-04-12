#include <iostream>
#include <stack>
using namespace std;

void displayStack(stack <int> stk){
    while(!stk.empty()){
        cout<<" "<<stk.top();
        stk.pop();
    }
    cout<<endl;
}
int main() {
    stack <int> stk;
    stk.push(25);
    stk.push(15);
    stk.push(45);
    stk.push(35);
    stk.push(65);
    cout<<"\nThe size of stack : "<<stk.size();
    cout<<endl<<"The stack elements are: ";
    displayStack(stk);
    
    cout<<"\nThe top element are: "<<stk.top();

    stk.pop();
    
    cout<<endl<<"The stack elements are: ";
    displayStack(stk);
    
    
}