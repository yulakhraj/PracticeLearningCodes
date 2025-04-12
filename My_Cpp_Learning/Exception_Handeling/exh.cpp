#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        cout << "Please enter something: ";
        string input;
        getline(cin, input);
        try
        {
            int num = stoi(input);
            cout << "You entered an integer: " << num << '\n';
        }
        catch (invalid_argument &)
        {
            cout << "You entered a string: " << input << '\n';
        }
    }
    return 0;
}