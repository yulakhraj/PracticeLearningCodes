#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class DoublyEndedQueue
{
private:
    Node *head;

public:
    DoublyEndedQueue()
    {
        head = NULL;
    }
    void push(int value) //  insertion
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void pushAtLast(int value) //  insert at last
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

    void popAtRear()
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

        temp->next = NULL;
    }
    void popAtfront()
    {
        if (head == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        
    }
    void display() // print
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

    DoublyEndedQueue dbq;

    while (true)
    {
        cout << "Choose Restricted: ";
        cout << "\nChoose 1 for input restricted: ";
        cout << "\nChoose 2 for output restricted: ";
        cout << "\nEnter choice: ";
        int res;
        cin >> res;
        switch (res)
        {
        case 1:
            while (true)
            {
                int value, choice;
                cout << "\n\t\t input restricted Queue Operations";
                cout << "\n1. Insert ";
                cout << "\n2. Delete at rear ";
                cout << "\n3. Delete at front ";
                cout << "\n4. Display Stack Elements ";
                cout << "\n5. Exit ";
                cout << "\nPlease enter your Choice (1-5): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "\nEnter a element: ";
                    int value;
                    cin >> value;
                    dbq.push(value);
                    break;
                case 2:
                    cout << "\nPop operation at rear: ";
                    dbq.popAtRear();
                    break;
                case 3:
                    cout << "\nPop opeartion at front: ";
                    dbq.popAtfront();
                    break;
                case 4:
                    cout << "\nThe Queue Elements are: ";
                    dbq.display();
                    break;
                case 5:
                    exit(0);
                    break;
                default:
                    cout << "Invalid Entry Enter between (1-4): ";
                    break;
                }
            }

        case 2:
            while (true)
            {
                int value, choice;
                cout << "\n\t\t output restricted Queue Operations";
                cout << "\n1. Insert at rear ";
                cout << "\n2. Insert at front ";
                cout << "\n3. Delete ";
                cout << "\n4. Display Stack Elements ";
                cout << "\n5. Exit ";
                cout << "\nPlease enter your Choice (1-5): ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "\nEnter a element: ";
                    int value;
                    cin >> value;
                    dbq.push(value);
                    break;
                case 2:
                    cout << "\nEnter a element: ";
                    cin >> value;
                    dbq.pushAtLast(value);
                    break;
                case 3:
                    cout << "\nPop opeartion at front: ";
                    dbq.popAtRear();
                    break;
                case 4:
                    cout << "\nThe Queue Elements are: ";
                    dbq.display();
                    break;
                case 5:
                    exit(0);
                    break;
                default:
                    cout << "Invalid Entry Enter between (1-4): ";
                    break;
                }
            }
        default:
            cout << "Eneter the choice between 1 and 2: ";
        }
    }
    return 0;
}