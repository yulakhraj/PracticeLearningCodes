#pragma once
using namespace std;
class ProjInfo {
public:
    int projId;
    string projName;
    string projDate;
    int noOfMembers;

    ProjInfo() {}

    ProjInfo(int projId, string projName, string projDate, int noOfMembers) {
        this->projId = projId;
        this->projName = projName;
        this->projDate = projDate;
        this->noOfMembers = noOfMembers;
    }
    void DisplayProjInfoObj() {
        cout << "\n";
        cout << "\nProject ID: " << this->projId;
        cout << "\nProject Name: " << this->projName;
        cout << "\nProject Date: " << this->projDate;
        cout << "\nNo. of Project Members: " << this->noOfMembers;
        cout << "\n";
    }
};
class Node {
public:
    ProjInfo projInfoObj;
    Node* next;

    Node() {
        next = NULL;
    }
    Node(ProjInfo projInfoObj) {
        this->projInfoObj = projInfoObj;
        this->next = NULL;
    }
};
class Linkedlist {
    Node* head;
public:
    Linkedlist() 
    {
        head = NULL; 
    }

    void insertion(int projid, string projname, string startdate, int noofresource) {
        ProjInfo projInfoObj(projid, projname, startdate, noofresource);
        Node* newNode = new Node(projInfoObj);

        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        newNode->next = temp;
        head = newNode;
    }
    int getLengthOfLL() {
        Node* temp = head;
        int len = 0;

        while (temp != NULL) {
            temp = temp->next;
            len++;
        }
        delete temp;
        return len;
    }
    void deletion_atStart() {
        Node* temp = head;
        if (temp == NULL)
            cout << "\nList is Empty";
        else {
            head = head->next;
            delete temp;
        }
    }
    void deletion_byLoc(int loc) {
        Node* temp = head, * prevNode = NULL;
        int len = getLengthOfLL();

        if (head == NULL) {
            cout << "\nList empty." << endl;
            return;
        }
        if (len < loc) {
            cout << "\nIndex out of range" << endl;
            return;
        }
        if (loc == 1) {
            head = head->next;
            delete temp;
            return;
        }
        // Traverse the list to find the node to be deleted.
        while (loc-- > 1) {
            prevNode = temp;
            temp = temp->next;
        }

        // Change the next pointer of the previous node.
        prevNode->next = temp->next;

        delete temp;
    }
    void deletion(int delProjID) {
        Node* temp = head;
        Node* prevNode = temp;

        if (temp == NULL) {
            printf("\nList is Empty");
        }
        else {
            // For getting the index of entered project ID
            int ind = 0;
            Node* tp_mid = head;
            while (tp_mid != 0) {
                ind++;
                if (tp_mid->projInfoObj.projId == delProjID) { break; }
                tp_mid = tp_mid->next;
            }

            if (temp->projInfoObj.projId == delProjID) {
                cout << "\nDeleted from Start.";
                deletion_atStart();
            }
            else {
                cout << "\nDeleted from Loc.";
                deletion_byLoc(ind);
            }
            cout << "\nDeletion Done.";
        }

    }
 
    void deletefirst() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "List empty";
        }
        else {
            head = head->next;
        }

   }
    void searching(int searchID)
    {
        Node* temp = head;
        while (temp!=NULL) 
        {
            if (temp->projInfoObj.projId == searchID) 
            {
                temp->projInfoObj.DisplayProjInfoObj();
                break;
            }
            else 
            {
                temp = temp->next;
            }
        }
    }
    void traversing() 
    {
        Node* temp = head;
        if (head == NULL) 
        {
            cout << "\nLinked List is Empty!" << endl;
            return;
        }
        while (temp != NULL) 
        {
            temp->projInfoObj.DisplayProjInfoObj();
            temp = temp->next;
        }
    }

};