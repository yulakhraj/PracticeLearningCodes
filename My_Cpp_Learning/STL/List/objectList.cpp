//#include <bits/stdc++.h>
#include<list>
#include<iostream>
#include<string>
using namespace std;
class info
{
private:
    string name;
    float mks;

public:
    void setname(string tname)
    {
        this->name = tname;
    }
    string getname()
    {
        return (name);
    }
    void setmks(float tmks)
    {
        this->mks = tmks;
    }
    float getmks()
    {
        return (mks);
    }
    bool operator <(const info& infObj) const
    {
        return mks < infObj.mks;
    }
};
int main()
{
    list<info> ll;
    list<info> lst2;
    list<info> lst3;
    list<info>::iterator itr;
    while (true)
    {
        int choice, pos;
        string tname;
        float tmks;
        info temp;
        cout << "List Operations";
        cout << "\t\n1. Insert At First ";
        cout << "\t\n2. Insert At Last ";
        cout << "\t\n3. Insert At Position ";
        cout << "\t\n4. Delete At First ";
        cout << "\t\n5. Delete At Last ";
        cout << "\t\n6. Delete At Position ";
        cout << "\t\n7. Display Elements & Size ";
        cout << "\t\n8. Sort List ";
        cout << "\t\n9. Split List ";
        cout << "\t\n10. Merge List ";
        cout << "\t\n11. Exit ";
        cout << "\t\nEnter the Choice (1 to 5): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter Name : ";
            getline(cin >> ws, tname);
            cout << "\n Enter Marks : ";
            cin >> tmks;
            temp.setname(tname);
            temp.setmks(tmks);
            ll.push_front(temp);    //ll.push_front(temp);
            break;
        case 2:
            cout << "\n Enter Name : ";
            getline(cin >> ws, tname);
            cout << "\n Enter Marks : ";
            cin >> tmks;
            temp.setname(tname);
            temp.setmks(tmks);
            ll.push_back(temp);         //ll.push_back(temp);
            break;
        case 3:
            cout << "\n Enter The Position : ";
            cin >> pos;
            cout << "\n Enter name : ";
            getline(cin >> ws, tname);
            cout << "\n Enter marks : ";
            cin >> tmks;
            temp.setname(tname);
            temp.setmks(tmks);
            itr = ll.begin();
            for (int i = 1; i < pos; i++)
            {
                itr++;
            }
            ll.insert(itr, temp);           //ll.insert(itr, temp);  at position
            break;
        case 4:
            ll.pop_front();
            cout << "\nSuccessful Front Element Deleted....\n";
            cout << endl;
            break;
        case 5:
            ll.pop_back();
            cout << "\nSuccessful Last Element Deleted....\n";
            cout << endl;
            break;
        case 6:
            cout << "\nEnter The Position: ";
            cin >> pos;
            advance(itr, pos);
            ll.erase(itr);
            cout << "\nSuccessful " << pos << " Element Deleted....\n";
            break;
        case 7:
            cout << "\n The Size of List ll :" << ll.size() << endl;
            itr = ll.begin();
            while (itr != ll.end())
            {
                info t = *itr;
                cout << "\n Name : " << t.getname() << "\t Marks : " << t.getmks();
                itr++;
            }
            cout << endl<< endl;
            break;
        case 8:
            ll.sort();
            break;
        case 9:
            cout << endl;
            break;
        case 10:
            break;
        case 11:
            exit(1);
            break;
        default:
            cout << "Enter right choice: ";
            break;
        }
    }
}
