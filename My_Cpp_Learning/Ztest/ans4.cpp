#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
    Node *head;
    Node *tail;

public:
    Linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    
    void insertAtlast(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL && tail == NULL)
        {
            head = newNode;
            tail = newNode;
            newNode->next = NULL;
            return;
        }
        Node *temp = tail;
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;
        tail = newNode;
    }

    void traverse()
    {
        Node *temp = head;
        if (head == NULL && tail == NULL)
        {
            cout << "\nLinked List is Empty!" << endl;
            return;
        }
        cout << "\nNodes of Linked List -> ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void sort()
    {
        Node *current = NULL, *index = NULL;
        int temp;
        if (head == NULL)
        {
            return;
        }
        else
        {
            for (current = head; current->next != NULL; current = current->next)
            {
                for (index = current->next; index != NULL; index = index->next)
                {
                    if (current->data > index->data)
                    {
                        temp = current->data;
                        current->data = index->data;
                        index->data = temp;
                    }
                }
            }
        }
    }

    stack<int> stackList()
    {
        Node *temp = head;
        stack<int> st_of_data;            
        while (temp)
        {
            st_of_data.push(temp->data);    
            temp = temp->next;
        }
        return st_of_data;
    }

};

int main()
{
    Linkedlist obj1;
    Linkedlist obj2;
    Linkedlist obj3;

    /*// hard codding for try
    obj1.insertAtlast(10);
    obj1.insertAtlast(30);
    obj1.insertAtlast(50);
    obj1.insertAtlast(40);
    obj1.insertAtlast(20);
    cout << "Linked List 1: ";
    cout << "\nBefore Sorting...";
    obj1.traverse();
    obj1.sort();
    cout << "\nAfter Sorting...";
    obj1.traverse();

    obj2.insertAtlast(100);
    obj2.insertAtlast(300);
    obj2.insertAtlast(500);
    obj2.insertAtlast(400);
    obj2.insertAtlast(200);
    cout << "\n\nLinked List 2: ";
    cout << "\nBefore Sorting...";
    obj2.traverse();
    obj2.sort();
    cout << "\nAfter Sorting...";
    obj2.traverse();
    stack<int> nodes_list1 = obj1.stackList();
    stack<int> nodes_list2 = obj2.stackList();
    while (!nodes_list1.empty())
    {
        obj3.insertAtlast(nodes_list1.top());
        nodes_list1.pop();
    }
    while (!nodes_list2.empty())
    {
        obj3.insertAtlast(nodes_list2.top());
        nodes_list2.pop();
    }
    obj3.sort();
    cout << "\n\nAfter Merging...";
    obj3.traverse(); */

    while (true)
    {
        int data1, data2;
        stack<int> nodes_list1 = obj1.stackList();
        stack<int> nodes_list2 = obj2.stackList();
        cout << "\nLinked list Operations\n";
        cout << "\n1. Insertion in List 1: ";
        cout << "\n2. Insertion in List 2: ";
        cout << "\n3. Traverse in List 1: ";
        cout << "\n4. Traverse in List 2: ";
        cout << "\n5. Sort the both list: ";
        cout << "\n6. Merge the List 1 & 2 into List 3: ";
        cout << "\n7. Traverse the list 3: ";
        cout << "\n8. exit: ";
        cout << "\n Enter the choice between (1-8). \n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the Data for Linked List 1: \n";
            cin >> data1;
            obj1.insertAtlast(data1);
            break;
        case 2:
            cout << "Enter the Data for Linked List 2: \n";
            cin >> data2;
            obj2.insertAtlast(data2);
            break;
        case 3:
            cout << "Elements in Linked List 1: \n";
            obj1.traverse();
            break;
        case 4:
            cout << "Elements in Linked List 2: \n";
            obj2.traverse();
            break;
        case 5:
            obj1.sort();
            obj2.sort();
            break;
        case 6:
            while (!nodes_list1.empty())
            {
                obj3.insertAtlast(nodes_list1.top());
                nodes_list1.pop();
            }
            while (!nodes_list2.empty())
            {
                obj3.insertAtlast(nodes_list2.top());
                nodes_list2.pop();
            }
            obj3.sort();
            break;
        case 7:
            obj3.traverse();
            break;
        case 8:
            exit(1);
        }
    }

    return 0;
}
