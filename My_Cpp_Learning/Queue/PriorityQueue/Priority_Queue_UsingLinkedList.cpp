#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    int pq;
    Node(int data,int pq){
        this->data=data;
        this->pq=pq;
    }
};
class PriorityQueue
{
private:
    Node *head;
public:
    PriorityQueue()
    {
        head = NULL;
    }
    void push(int value,int priority)          //  insertion
    {
        Node *newNode = new Node(value,priority);
        newNode->next = head;
        head = newNode;
    }
    void dequeue(int pqlow){
        int comp=pqlow;
        Node* temp = head;
        while(temp!=NULL){
            if(temp->pq > comp){
                comp=temp->pq;
            }
            temp=temp->next;
        }

        temp = head;
        if(temp->next == NULL)
        {
            head = NULL;
            return;
        }
        while(temp->next!=NULL){
            if(temp->next->pq == comp)
            {
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "priority queue is empty." << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout <<"\nElement are: "<< temp->data << " priority are : "<<temp->pq;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq1;
    cout<<"Enter The priority range between 1 to 5: ";
        int pqhigh,pqlow;
        cout<<"\nEnter the highpriority: ";
        cin>>pqhigh;
        cout<<"\nEnter the lowpriority: ";
        cin>>pqlow;

    while(true){
        int choice;

        cout << "\n\t\t Priority Queue Operations";
        cout << "\n1. Insert ";
        cout << "\n2. Delete ";
        cout << "\n3. Display Stack Elements ";
        cout << "\n4. Exit ";
        cout << "\nPlease enter your Choice (1-4): ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter a element: ";
                int value; cin>>value;
                cout<<"\nEnter the prority: ";
                int priority; cin>>priority;
                pq1.push(value,priority);
                break;
            case 2:
                cout<<"\n ";
                pq1.dequeue(pqlow);
                break;
            case 3:
                pq1.display();
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Invalid Entry Enter between (1-4)";
                break;
        }
    }
    return 0;
}