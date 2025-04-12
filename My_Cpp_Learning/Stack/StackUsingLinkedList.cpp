#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Stack
{
private:
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(int value)          //  insertion
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    
    void pop()              //delete
    { 
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void display()          //print
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int getlength(){
        int length=0;
        Node *temp = head;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;       
    }
    // to check empty or not
    void isEmpty()
    {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
        }else{
            cout<<"Stack not empty ";
        }
    }
};

int main()
{
    Stack s1;
    while(true){
        int value,choice;

        cout << "\n\t\t STACK Operations";
        cout << "\n1. Insert ";
        cout << "\n2. Delete ";
        cout << "\n3. Display Stack Elements ";
        cout << "\n4. To check Stack is empty ";
        cout << "\n5. Exit ";
        cout << "\nPlease enter your Choice (1-5) ";
        
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"\nEnter a element: ";
                int value; cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"\nPop operation successful ";
                s1.pop();
                break;
            case 3:
                s1.display();
                break;
            case 4:
                s1.isEmpty();
                break;
            case 5:
                exit(1);
            default:
                cout<<"Invalid Entry Enter between (1-5)";
                break;
        }
    }
    return 0;
}