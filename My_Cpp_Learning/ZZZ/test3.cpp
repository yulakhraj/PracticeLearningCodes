#include <iostream>
#include <sstream>   
#include <map>
#include <string>

using namespace std;
map<string, string> v;
void set(string varname, string value)
{
    auto itr = v.find(value);
    if (itr != v.end())
    {
        value = itr->second;
    }
    v[varname] = value;
    cout << value << endl;
}
string check(string value)
{
    auto itr = v.find(value);
    if (itr != v.end())
    {
        return itr->second;
    }
    return value;
}
void print(string varname)
{
    auto itr = v.find(varname);
    if (itr != v.end())
    {
        cout << check(itr->second) << endl;
    }
    else
    {
        cout << "Variable " << varname << " is not set " << endl;
    }
}
void help()
{
    cout << " Follwing are the command to supported: " << endl;
    cout << " quit - to quit the program " << endl;
    cout << " exit - to exit the program " << endl;
    cout << " help - to display this help " << endl;
    cout << " set - to set a variable " << endl;
    cout << " print - to print the value of a variable " << endl;
}
int main()
{
    string str;
    while (true)
    {
        cout << ">";
        getline(cin, str);

        istringstream s(str);
        string command, varname;
        string value;
        s >> command;
        if (command == "set")
        {
            s >> varname >> value;
            set(varname, value);
        }
        else if (command == "print")
        {
            s >> varname;
            print(varname);
        }
        else if (command == "help")
        {
            help();
        }
        else if (command == "quit" || command == "exit")
        {
            break;
        }
        else
        {
            cout << " You entered " << command << endl;
        }
    }
}