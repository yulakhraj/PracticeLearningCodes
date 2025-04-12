#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <vector>
using namespace std;

int main()
{
    cout << "This is a Variable App" << endl;
    map<string, string> mymap;
    string input;
    vector<string> hist;
    while (true)
    {
        cout << "> ";
        getline(cin, input);
        /*bool containsNumber = false;
        for (char c : input)
        {
            if (isdigit(c))
            {
                containsNumber = true;
                break;
            }
        }*/
        if (input == "quit" || input == "exit")
        {
            hist.push_back(input);
            break;
        }
        else if (input == "help")
        {
            hist.push_back(input);
            cout << "Following are the command supported:" << endl;
            cout << "quit - to quit the program" << endl;
            cout << "exit - to exit the program" << endl;
            cout << "help - to display this help" << endl;
            cout << "set - to set a inputiable" << endl;
            cout << "print - to print the input of a variable" << endl;
        }
        else if (input.substr(0, 4) == "set ")
        {
            hist.push_back(input.substr(0, 4));
            string name = input.substr(4, 1);
            string num = input.substr(6);
            mymap[name] = num;
            cout << num << endl;
        }
        else if (input.substr(0, 6) == "print ")
        {
            hist.push_back(input.substr(0, 6));
            string name = input.substr(6);
            if (mymap.find(name) != mymap.end())
            {
                cout << mymap[name] << endl;
            }
            else
            {
                cout << "Variable " << name << " not set." << endl;
            }
        }
        else if (input.substr(0, 8) == "history")
        {
            for(int i=0;i<hist.size();i++){
                cout<<i<<". "<<hist[i]<<endl;
            }
        }
        else
        {
            cout << "You entered " << input << endl;
        }
    }

    return 0;
}
