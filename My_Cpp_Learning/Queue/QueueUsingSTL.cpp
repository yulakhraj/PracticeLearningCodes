#include <iostream> 
#include <queue> 
using namespace std; 

void showq(queue <int> g) 
{ 
    while (!g.empty()) 
    { 
        cout <<" "<< g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
int main(){
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<endl<<"The queue elements are: ";
    showq(q);
    cout<<"\nThe size of queue : "<<q.size();
    cout<<"\nThe front element queue : "<<q.front();
    cout<<"\nThe back element queue : "<<q.back();
    q.pop();
    cout<<endl<<"After pop queue elements are: ";
    showq(q);
}