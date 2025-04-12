// Implementation of variable arguments using vector.
#include <iostream>
#include <vector>
using namespace std;

// Using vector of string as a parameter to store a variable number of strings.
void printNames(vector<string> nameVector) {
    for (string &name : nameVector) {
        cout << name << " ";
    }
    cout << '\n';
}

int main() {
    printNames({"Scaler", "Topics"});
    printNames({"Technopedia", "for", "your", "mastermind!"});
    return 0;
}
