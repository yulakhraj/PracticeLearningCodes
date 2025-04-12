#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "This is a variable app" << endl;
    string var;
    while (true)
    {
        cout << "> ";
        getline(cin, var);
        if (var == "quit")
        {
            exit(1);
        }
        else if (var == "exit")
        {
            exit(1);
        }
        else if (var == "help")
        {
            cout << "Following are the command supported:"<<endl;
            cout << "quit - to quit the program"<<endl;
            cout << "exit - to exit the program"<<endl;
            cout << "help - to display this help"<<endl;
            cout << "set - to set a variable"<<endl;
            cout << "print - to print the value of a variable"<<endl;
        }
        else{
            cout << "You entered "<<var;
        }
        return 0;
    }
}