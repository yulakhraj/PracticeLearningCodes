#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int roll;
public:
    student() {}
    student(int roll, string name)
    {
        this->name = name;
        this->roll = roll;
    }
    void setname(string tname)
    {
        this->name = tname;
    }
    string getname()
    {
        return name;
    }
    void setroll(int troll)
    {
        this->roll = troll;
    }
    int getroll()
    {
        return roll;
    }
    void print()
    {
        cout << "Name= " << name << endl;
        cout << "Roll= " << roll << endl;
    }
};

int main()
{
    student s1, s2;
    s1.setname("manish raj");
    s1.setroll(30);
    s1.print();
    // string name;
    // int roll;
    // cout<<"enter the name";
    // getline(cin,name);
    // s2.setname(name);
    // cout<<"enter the roll";
    // cin>>roll;
    // s2.setroll(roll);
    // s2.print();

    cout << "Name= " << s1.getname() << endl;
    cout << "Roll= " << s1.getroll() << endl;
}