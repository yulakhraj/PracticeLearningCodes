// Implementation of variable arguments using initializer_list.
#include <iostream>
#include <initializer_list>
using namespace std;

// Using initializer_list of string as a parameter to store a variable number of strings.
void printNames(initializer_list<string> nameList) {
    for (auto &name : nameList) {
        cout << name << " ";
    }
    cout << '\n';
}

int main() {
    printNames({"Scaler", "Topics"});
    printNames({"Technopedia", "for", "your", "mastermind!"});
    return 0;
}
