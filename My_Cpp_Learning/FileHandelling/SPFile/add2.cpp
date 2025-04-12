#include <iostream>
#include <cstdlib> // For std::atoi
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <num1> <num2>\n";
        return 1;
    }

    int num1 = atoi(argv[1]); // Convert command line argument to int
    int num2 = atoi(argv[2]); // Convert command line argument to int

    int sum = num1 + num2;

    //cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
	cout<<sum;
    return 0;
}
