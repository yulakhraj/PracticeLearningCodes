#include<iostream>
#include<string>
using namespace std;

int main()
{
	string abc;
	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	getline(cin, abc);
	for (int i = 0; i < abc.length(); i++)
  	{
  		abc[i] = tolower(abc[i]);
  	}
	cout<< "\nThe Given String in Uppercase = " << abc<<endl;
	cout<<"--------2nd method-----------"<<endl;
	
	for (int i = 0; i < abc.length(); i++)
  	{
  		if(abc[i]>=65 && abc[i]<=90){
  		    abc[i]=abc[i]+32;
  		}
  	}
    /*     // Lower to Higher
    abc[i] = toupper(abc[i]);

    if(abc[i]>=97 && abc[i]<=122){
        abc[i]=abc[i]-32;
    }
    */
	cout<<abc;
 	return 0;
}