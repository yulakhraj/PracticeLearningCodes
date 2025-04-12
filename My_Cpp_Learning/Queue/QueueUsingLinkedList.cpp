#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Queue
{
private:
    Node *head;
public:
    Queue()
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
    
    void pop()
    { 
        if (head == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    void display()          //print
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
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
};

int main()
{
    Queue q1;
    while(true){
        int value,choice;

        cout << "\n\t\t Queue Operations";
        cout << "\n1. Insert ";
        cout << "\n2. Delete ";
        cout << "\n3. Display Elements ";
        cout << "\n4. Exit ";
        cout << "\nPlease enter your Choice (1-4) ";
        
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\nEnter a element: ";
                int value; cin>>value;
                q1.push(value);
                break;
            case 2:
                cout<<"\nPop operation successful ";
                q1.pop();
                break;
            case 3:
                cout<<"\nThe Queue Elements are: ";
                q1.display();
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Invalid Entry Enter between (1-6)";
                break;
        }
    }
    return 0;
}