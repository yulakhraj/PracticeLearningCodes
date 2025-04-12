#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedListOperation
{
private:
    Node *head;
public:
    LinkedListOperation()
    {
        head = NULL;
    }
    void insertAtFirst(int value)           // insert at first
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void insertAtLast(int value)            //  insert at last
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void insertAtPosition(int value, int position)    //  insert at position
    {
        if (position == 1 || head == NULL)
        {
            insertAtFirst(value);
            return;
        }
        Node *newNode = new Node();
        newNode->data = value;

        Node *temp = head;
        int count = 1;
        while (count < position - 1 && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            cout << "Invalid position." << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtFirst()
    {
        if (head == NULL)
        {
            cout << "LinkedList is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
    }

    void deleteAtLast()
    { 
        if (head == NULL)
        {
            cout << "LinkedList is empty" << endl;
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
    void deleteAtPosition(int position)
    { 
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (position <= 0)
        {
            cout << "Invalid position." << endl;
            return;
        }

        if (position == 1)
        {
            deleteAtFirst();
            return;
        }

        Node *temp = head;
        int count = 1;
        while (count < position - 1 && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }

        if (temp->next == NULL)
        {
            cout << "Invalid position." << endl;
            return;
        }

        Node *nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
    void display()
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
    void reverseprint(Node* head){
        if(head==NULL){
            return;
        }
        reverseprint(head->next);
        cout<<head->data<<" ";
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
};

int main()
{
    LinkedListOperation ll;
    while(true){
        int value,position;

        cout << "\n\t\t Linked List Operations";
        cout << "\n\t 1. Insert At Front";
        cout << "\n\t 2. Insert At Position";
        cout << "\n\t 3. Insert At Last";
        cout << "\n\t 4. Delete At Front";
        cout << "\n\t 5. Delete At position";
        cout << "\n\t 6. Delete At Last";
        cout << "\n\t 7. Traverse or Print";
        cout << "\n\t 8. Exit";
        cout << "\n\t Please enter your Choice (1-8) ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter The data: ";
                cin>>value;
                ll.insertAtFirst(value);
                break;
            case 2:
                cout<<"\nEnter The Position: ";
                cin>>position;
                cout<<"\nEnter the value: ";
                cin>>value;
                ll.insertAtPosition(value,position);
                break;
            case 3:
                cout<<"\nEnter the value: ";
                cin>>value;
                ll.insertAtLast(value);
                break;
            case 4:
                ll.deleteAtFirst();
                break;
            case 5:
                cout<<"\nEnter the position: ";
                cin>>position;
                ll.deleteAtPosition(position);
                break;
            case 6:
                ll.deleteAtLast();
                break;
            case 7:
                cout<<"\nElements are :";
                ll.display();
                break;
            case 8:
                exit(1);
            default:
                cout<<"\nInvalid options";
        }
    }
    return 0;
}