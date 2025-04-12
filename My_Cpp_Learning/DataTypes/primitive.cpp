#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Range of bool: " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() << endl;
    cout << "Range of char: " << (int)numeric_limits<char>::min() << " to " << (int)numeric_limits<char>::max() << endl;
    cout << "Range of short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "Range of int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Range of long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "Range of float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "Range of double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    cout << "Range of long double: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
    return 0;
}