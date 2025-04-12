#include <string>
#include <iostream>
using namespace std;
class info
{
private:
    int roll;
    string name;
    float salary;

public:
    info() // default and do nothing constructor
    {
        cout << endl
             << "\n Default Constructor Called";
    }
    info(int roll, string tname, float tsalary) // parameterized constructor
    {
        cout << endl
             << "\n Parameterized COnstructor called";
        this->roll = roll;
        this->name = tname;
        this->salary = tsalary;
    }
    info(info &ref)
    {
        cout << "\n Copy Constructor called ";
        this->roll = ref.roll;
        (this->name = ref.name);
        this->salary = ref.salary;
    }

    void display()
    {
        cout << "\n Roll : " << roll << "\t Name : " << name << "\t Salary: " << salary;
    }
};

int main()
{
    info ob1; // call default constructor

    int roll;
    char name[40];
    float salary;
    cout << "\n Enter Name :";
    cin.getline(name, 40);

    cout << "\n Enter Roll : ";
    cin >> roll;

    cout << "\n Enter Salary: ";
    cin >> salary;
    info ob2(roll, name, salary); // calling the parameterized constructor

    info ob3(ob2); // copy constructor

    cout << "\n ob1- called \n";

    cout << "\n ob2- called \n";
    ob2.display();

    cout << "\n ob3- called \n";
    ob3.display();
}