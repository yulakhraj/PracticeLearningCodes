#include<iostream>
#include<fstream>
#include<string>
using namespace std;
        
int main(){

    string fnm;
    cout << "\n Enter Filename : ";
    cin >> fnm;
    //string filename = "C:\\ZZproject\\LearnC++\\FileHandelling" + fnm;
    ofstream myfile(fnm);
    myfile.close();



    //ofstream file(ls);
    //file.open(fname,ios::out);


    //  1. To Write in a file
    // ofstream obj("myfile.txt"); 
    // obj.open("myfile.txt");
    // obj<<"hello everyone";
    // obj.close();


    //  2. Code to Append to file 
    // ofstream obj("myfile.txt",ios_base::app);
    // obj<<"\nI am manish";


    //  3. Truncate mode
    //ofstream obj("myfile.txt", ios_base::trunc);
    //obj.close();


    // 4. Read a file
    // string abc;
    // ifstream readobj("myfile.txt");
    
    // while(getline(readobj,abc)){
    //     cout<<abc;
    // }
    // readobj.close();

    


































    return 0;
}