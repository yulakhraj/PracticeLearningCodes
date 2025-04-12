#include<iostream>
#include "objectheader.h"
using namespace std;


int main() {
	Linkedlist ll;
    
    while (true)
    {
        int choice, projId, noOfMembers;
        string projName, projDate;

        int delProjID, searchID;

        cout << "\nLinked List Operations";
        cout << "\n\t 1. Insertion";
        cout << "\n\t 2. Traversing";
        cout << "\n\t 3. Deletion";
        cout << "\n\t 4. Searching";
        cout << "\n\t 5. Updating";
        cout << "\n\t 6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the Project Information ";
            cout << "\n\t Enter Project Id: ";   cin >> projId;
            cout << "\t Enter Project Name: ";   cin >> projName;
            cout << "\t Enter Project Date: ";   cin >> projDate;
            cout << "\t Enter Project Member: "; cin >> noOfMembers;
            
            ll.insertion(projId, projName, projDate, noOfMembers);

            break;
        case 2:
            cout << "\nPrinting Data\n";
            ll.traversing();
            break;
        case 3:
            cout << "\nEnter project Id: "; cin >> delProjID;
            ll.deletion(delProjID);
            break;
        case 4:
            cout << "\nEnter project ID: "; cin >> searchID;
            cout << "\n Search Data are: " << endl;
            ll.searching(searchID);
            break;
        case 5:
            cout << "Updating";
            break;
        case 6:
            cout << "Exit";
            exit(1);
        default:
            cout << "Invalid choice";
            break;
        }
    }
    return 0;
}
  