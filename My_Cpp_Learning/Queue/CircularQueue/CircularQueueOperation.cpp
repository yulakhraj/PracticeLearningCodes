#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class CircularQueue
{
    Node *head;
    Node *tail;

public:
    CircularQueue()
    {
        head = NULL;
        tail = NULL;
    }
    void Enqueue(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
            // cout<<value<<" is added in queue.";
        }
    }
    void Dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else if (head == tail)
        {
            Node *temp = head;
            head=tail=NULL;
            tail->next = head;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        Node *temp = head;
        cout << "The Queue elements are: ";
        while (temp->next != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
        cout << endl;
    }
};
int main()
{
    CircularQueue cirQ;
    while (true)
    {
        int choice, value;
        cout << "\n\t\t Circular Queue Operations";
        cout << "\n1. Insert ";
        cout << "\n2. Delete ";
        cout << "\n3. Display Elements ";
        cout << "\n4. Exit ";
        cout << "\nPlease enter your Choice (1-4): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter a element: ";

            cin >> value;
            cirQ.Enqueue(value);
            break;
        case 2:
            cout << "\n";
            cirQ.Dequeue();
            break;
        case 3:
            cout << "\n";
            cirQ.display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "Invalid Entry Enter between (1-6)";
            break;
        }
    }
    return 0;
}