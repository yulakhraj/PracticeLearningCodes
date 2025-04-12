#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream inputFile("file.txt");

    /*if (!inputFile.is_open()) {
        cerr << "Error opening file.txt" << endl;
        return 1;
    }*/

    int sum = 0;
    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        int number;
        if (ss >> number) {
            sum += number;
        }// else {
        //     cerr << "Error: Invalid input format in file.txt" << endl;
        //     inputFile.close();
        //     return 1;
        // }
    }

    inputFile.close();
    
	cout << sum ;
    return 0;
}
