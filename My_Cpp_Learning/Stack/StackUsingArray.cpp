#include <iostream>
// push() pop() peek() isEmpty()
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;
public:
    stack(){}
    stack(int n){
        arr=new int[n];
        size=n;
        top=-1;
    }
    
    void push(int value)
    {
        if (top >= size)
        {
            cout << "stack full";
        }
        else
        {
            arr[++top] = value;
            cout << value << " Pushed to the stack\n";
        }
    }
    int pop(){
        if(top==-1){
            cout<<"\nStack is empty.\n";
        }else{
            int x = arr[top--];
            return x;
        }
    }
    bool isEmpty()
    {
        if (top < 0)
        {
            return true;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "\nstack is empty\n";
        }
        else
        {
            cout << "\nStack elements are: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
    /*int top(){
        if (top == -1)
        {
            cout << "\nstack is empty\n";
        }else{
            int tp=arr[top];
            return tp;
        }
    }*/
};
int main()
{
    int n;
    cin>>n;
    stack s2(n);
    
    stack s1(10);
    

    while(true){
        int choice;

        cout << "\n\t\t STACK Operations";
        cout << "\n1. Insert ";
        cout << "\n2. Delete ";
        cout << "\n3. Display Stack Elements ";
        cout << "\n4. To check Stack is empty ";
        cout << "\n5. To view Top element ";
        cout << "\n6. Exit ";
        cout << "\nPlease enter your Choice (1-5) ";
    
        cout<<"Enter the choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"\nEnter a element: ";
                int ele; cin>>ele;
                s1.push(ele);
                break;
            case 2:
                cout<<"\nPop operation successful ";
                s1.pop();
                break;
            case 3:
                s1.display();
                break;
            case 4:
                cout<<s1.isEmpty();
                break;
            case 5:
                //couts1.top();
                break;
            case 6:
                exit(1);
            default:
                cout<<"Invalid Entry.Enter between (1-6)";
                break;
        }
    }
    return 0;
}