// program 4
#include<iostream>
using namespace std;

int main(){
    int row, column;
    cout<<"Enter the row: ";
    cin>>row;
    cout<<"enter the column: ";
    cin>>column;

    int marks[row][column];     //Declare 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"enter the element at index "<<i<<j<<": ";
            cin>>marks[i][j];       // Taking input in 2D array at i and j index
        }
    }
    int sum = 0;                    // declare sum variable 
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum+=marks[i][j];        // Adding all [i][j] index element and store at Sum 
        }
    }
    cout<<"The sum of 2D matrix is: "<<sum;


}