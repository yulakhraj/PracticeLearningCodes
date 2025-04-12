#include <iostream>
using namespace std;


void func() throw (int, char, float)
{
    try
    {
        char ch;
        int i;        
        float f;
        double d;
        cout << "\n Enter a character :";
        cin >> ch;
        cout << "\n Enter an Integer : ";
        cin >> i;
        cout << "\n Enter a float : ";
        cin >> f;
        cout << "\n Enter a double :";
        cin >> d;
        if (toupper(ch) == 'A')
        {
            throw ch;
        }
        if (i == 100)
        {
            throw i;
        }
        if (f==2.5)
        {
            throw f;
        }
        if (d==000.1)
        {
            throw d; //this exception shall not be thrown as double is not mentioned int the list
        }
    }
    catch (char ch)
    {
        cout << "\n Character Entered";
    }
    catch (int i)
    {
        cout << "\n Interger Entered";
    }
    catch (float f)
    {
        cout << "\n Float is entered";
    }
   /* catch (double d)
    {
        cout << "\n double is entered";
    }*/
}
int main()
{
    func();
}
