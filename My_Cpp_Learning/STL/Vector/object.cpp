#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
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
};
int main()
{
    vector<info> v;
    vector<info>::iterator itr;
    while (true)
    {
        char ch;
        string tname;
        float tmks;
        int pos, ele;
        info temp;
        int check = 0;
        cout << "\nVector Operations";
        cout << "\t\t\n1. Insert ";
        cout << "\t\t\n2. Insert at position";
        cout << "\t\t\n3. Delete At Position ";
        cout << "\t\t\n4. Delete No. Elements";
        cout << "\t\t\n5. Search Element ";
        cout << "\t\t\n6. Dispaly Element ";
        cout << "\t\t\n7. Exit ";
        cout << "\t\nEnter the Choice (1 to 6): ";

        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter name : ";
            getline(cin >> ws, tname);
            cout << "\n Enter marks :";
            cin >> tmks;

            temp.setname(tname);
            temp.setmks(tmks);
            v.push_back(temp);

            break;
        case 2:
            cout << "\n Enter position to insert object 1 - " << v.size() << " :";
            cin >> pos;
            if ((pos < 1) || (pos > v.size()))
            {
                cout << "\n Invalid position ... try again";
                continue;
            }
            else
            {
                itr = v.begin();
                //itr += (pos - 1);
                advance(itr,pos);
                cout << "\n Enter name : ";
                getline(cin >> ws, tname);
                cout << "\n Enter marks :";
                cin >> tmks;
                // info temp;
                temp.setname(tname);
                temp.setmks(tmks);
                v.insert(itr, temp);
                cout << endl;
                itr = v.begin();
            }
            break;
        case 3:
            cout << "\n Enter position to delete object 1 - " << v.size() << " :";
            cin >> pos;
            if ((pos < 1) || (pos > v.size()))
            {
                cout << "\n Invalid position ... try again";
                continue;
            }
            else
            {
                itr = v.begin();
                //itr += (pos - 1);
                advance(itr,pos);
                v.erase(itr);
            }
            break;
        case 4:
            cout << "\n Enter the no. of elements delete: ";
            cin >> ele;
            itr = v.begin();
            for (int i = 0; i < ele; i++)
            {
                v.erase(itr);
            }
            break;
        case 5:
            cout << "Enter name you want to search : ";
            getline(cin >> ws, tname);
            itr = v.begin();
            while (itr != v.end())
            {
                if ((*itr).getname() == tname)
                {
                    cout << endl
                         << tname << " found...";
                    cout << endl
                         << "Name : " << tname << " & Marks : " << (*itr).getmks();
                    check++;
                }
                itr++;
            }
            if (check == 0)
            {
                cout << endl
                     << tname << " not found.";
            }
            break;
        case 6:
            itr = v.begin();
            while (itr != v.end())
            {
                info t = *itr;
                cout << "\n Name : " << t.getname() << "\t Marks : " << t.getmks();
                itr += 1;
            }
            break;
        case 7:
            exit(1);
        default:
            cout << "Enter right choice: ";
            break;
        }
    }
}
