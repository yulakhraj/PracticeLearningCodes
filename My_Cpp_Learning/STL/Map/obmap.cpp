#include <bits/stdc++.h>
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
    map<int, info> tmap;
    map<int, info>::iterator itr;
    while (true)
    {
        char ch;
        string tname;
        float tmks;
        info temp;
        int k = 1, pos, sz, tk;
        cout << "Map Operations";
        cout << "\t\n1. Insert ";
        cout << "\t\n2. Delete At Position: ";
        cout << "\t\n3. Delete No. of Element ";
        cout << "\t\n4. Display Elements & Size ";
        cout << "\t\n5. Fetch a value By Key: ";
        cout << "\t\n6. Exit ";
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
            tmap.insert(pair<int, info>(k, temp));
            k++;
            break;
        case 2:
            cout << "\n Enter position to delete object 1 - " << tmap.size() << " :";
            cin >> pos;
            itr = tmap.begin();
            advance(itr, pos);
            tmap.erase(itr);
            cout << "\nSuceessful Deleted....\n";
            break;
        case 3:
            cout << "\n Enter numbr of objects to delete 1 - " << tmap.size() << " :";
            cin >> sz;
            itr = tmap.begin();
            advance(itr, sz);
            tmap.erase(tmap.begin(), itr);
            break;
        case 4:
            cout << "\nThe Map Elements are: ";
            itr = tmap.begin();
            while (itr != tmap.end())
            {
                cout << "\n"
                     << itr->first;
                cout << " Name : " << itr->second.getname() << "\t Marks : " << itr->second.getmks();
                ++itr;
            }
            cout << "\nSize of Map : " << tmap.size();
            cout << endl
                 << endl;
            break;
        case 5:
            cout << "\n Enter the key of the value to fetch : ";
            cin >> tk;
            itr = tmap.find(tk);
            if (itr != tmap.end())
            {
                cout << "\n"
                     << itr->first;
                cout << "\n"
                     << itr->second.getname() << "\t Marks :" << itr->second.getmks();
            }
            cout<<endl;
            break;
        case 6:
            exit(1);
        default:
            cout << "Enter right choice: ";
            break;
        }
    }
}
