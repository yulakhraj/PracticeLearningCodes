#include <iostream>
using namespace std;
int main() 
{   // char array to string
    char char_array[] = {'J','A','V','A','T','P','O','I','N','T'};
    int array_size = sizeof(char_array) / sizeof(char);
    string j = "";
    int i = 0;
    while(i < array_size){
        j = j + char_array[i];
        i++;
    }
    cout << j <<endl;
    
    // another way
    string j = char_array;
    // another way
    string str(char_array);
    cout<<str<<endl;
    
    // another way
    string s1="manish";
    string s2(s1);
    cout<<s2<<endl;
}