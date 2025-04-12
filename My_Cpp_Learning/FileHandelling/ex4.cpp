#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
    string name;
    int age;

public:
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return age;
    }
};

void writingFile()
{
    ofstream file("man.txt");
    if (!file)
    {
        cout << "\nNot exist man.txt...";
        return;
    }
    char ch;
    string name;
    int age;
    do
    {
        cout << "\nDo you want to continue [Y/N]: ";
        cin >> ch;
        if (ch == 'y')
        {
            cout << endl
                 << "Enter Student name: ";
            getline(cin >> ws, name);
            cout << endl
                 << "Enter Age: ";
            cin >> age;
            student s1(name, age);
            file << s1.getName() << " --> Student Age: " << s1.getID() << "\n";
        }
        else if (ch == 'n')
        {
            break;
        }
        else
        {
            cout << "\n Pressed wrong Key.\n Try again...";
        }
    } while (1);
    file.close();
}

void readingFile()
{
    ifstream file2("man.txt");
    if (!file2)
    {
        cout << "\nCannot open man.txt...";
        return;
    }
    char str[255];
    cout << endl;
    while (file2)
    {
        file2.getline(str, 255);
        if (file2)
        {
            cout << str << endl;
        }
    }
    file2.close();
}
void deleteFile()
{
    ofstream obj("man.txt", ios::trunc);
}
int main()
{

    void writingFile();
    void writingFile();
    void deleteFile();
    // while (true)
    // {
    //     int choice;
    //     cout << "File Operations\n";
    //     cout << "\t\n1. Create a File ";
    //     cout << "\t\n2. Read a file ";
    //     cout << "\t\n3. Delete a file ";
    //     cout << "\t\n4. Exit ";
    //     cout << "\t\nEnter the Choice (1 to 3): ";
    //     cin >> choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         writingFile();
    //         break;
    //     case 2:
    //         readingFile();
    //         break;
    //     case 3:
    //         deleteFile();
    //         break;
    //     case 4:
    //         exit(1);
    //     }
    // }

    return 0;
}