#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class info
{
    string name;
    int id;
public:
    info(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return id;
    }
};
void writingFile()
{

    ofstream out("man.txt");
    if (!out)
    {
        cout << "\nCannot open a.txt...";
        return;
    }
    char ch;
    string name;
    int id;
    do
    {
        cout << "\nDo you want to continue [Y/N]: ";
        cin >> ch;
        if (ch == 'Y')
        {
            cout << endl << "Enter employee name: ";
            getline(cin >> ws, name);
            cout << endl << "Enter employee id: ";
            cin >> id;
            info inf(name, id);
            out << inf.getName() << " --> Employee ID: " << inf.getID() << "\n";
        }
        else if (ch == 'N')
        {
            break;
        }
        else
        {
            cout << "\n Pressed wrong Key.\n Try again...";
        }
    } while (1);
    out.close();
}


void readingFile()
{
    ifstream in("man.txt");
    if (!in)
    {
        cout << "\nCannot open a.txt...";
        return;
    }
    char str[255];
    cout << endl;
    while (in)
    {
        in.getline(str, 255);
        if (in)
        {
            cout << str << endl;
        }
    }
    in.close();
}

int main(){
    
    writingFile();
    readingFile();
    
    return 0;

}