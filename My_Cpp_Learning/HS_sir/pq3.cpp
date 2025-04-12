#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const char* env_var = "MY_ENV_VAR";     // replace with the name of the environment variable you want to read
    const char* value = getenv(env_var);    // get the value of the environment variable

    if (value != NULL)                      // check if the environment variable exists
    {
        cout << "The value of " << env_var << " is " << value << endl; // print the value
    }
    else
    {
        cout << "Environment variable " << env_var << " not found." << endl; // print an error message if the environment variable doesn't exist
    }

    return 0;
}