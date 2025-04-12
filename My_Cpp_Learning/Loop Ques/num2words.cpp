#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Convert the number to words
    string str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string word;
    while (num > 0)
    {
        word = str[num % 10] + " " + word;
        num = num / 10;
    }

    
    // Display the number in words
    cout << word << endl;

    return 0;
}