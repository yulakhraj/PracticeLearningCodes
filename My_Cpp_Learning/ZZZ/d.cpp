#include <iostream>
using namespace std;

class X
{
public:
      X()
      {
            cout << "X constructor called" << endl;
      }

      ~X()
      {
            cout << "X destructor called" << endl;
      }
};

int main()
{
      try
      {
            throw 0;
      }
      catch (...)
      {
            cout << "Exception caused" << endl;
      }
      return 0;
}
