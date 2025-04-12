#include <iostream>
using namespace std;

class X

{
public:
    void operator()()
    {
        cout << "X::operator() called" << endl;
    }
};

int main()
{

    X x;
    x(); // x.operator() ();
    return 0;
}
