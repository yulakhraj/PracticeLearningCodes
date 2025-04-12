#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int age;
public:
    student(string name, int age){
        this->name=name;
        this->age=age;
    }
        string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void getData()
    {
        cout << "\nEnter name : ";
        getline(cin >> ws, name);
        cout << "\nEnter age : ";
        cin >> age;
    }
    void display()
    {
        cout << "\nName : " << name << "\nAge : " << age << endl;
    }
};



int main()
{
    student s1("manish",20);  // change
    ofstream file;
    ifstream file2;
    while (true)
    {
        int choice;
        cout << "File Operations\n";
        cout << "\t\n1. Create a File ";
        cout << "\t\n2. Read a file ";
        cout << "\t\n3. Delete a file ";
        cout << "\t\n4. Exit ";
        cout << "\t\nEnter the Choice (1 to 3): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            file.open("manish.txt");
            
        
            s1.getData();
            file.write((char *)&s1, sizeof(s1));
            file.close();

            break;
        case 2:

            // file2.open("manish.txt");
            // while (getline(file2, abc))
            // {
            //     cout << abc;
            // }
            // file2.close();

            // file2.open("manish.txt", ios::in);
            // file2.read((char *)&s1, sizeof(s1));
            // s1.display();
            break;
        case 3:

            break;
        case 4:
            exit(1);
        }
    }

    return 0;
}