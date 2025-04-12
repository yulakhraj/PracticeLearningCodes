#include <iostream>
#include <cstdlib> // for getenv() and atoi()
using namespace std;

int main() {
    // Get the value of environment variable 'a'
    const char* str1 = getenv("a");
    int a = str1 ? atoi(str1) : 0;

    // Get the value of environment variable 'b'
    const char* str2 = getenv("b");
    int b = str2 ? atoi(str2) : 0;

    int result = a + b;

    cout << result << endl;

    return 0;
}
