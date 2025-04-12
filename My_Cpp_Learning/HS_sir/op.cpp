#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int num1 = getenv("a");
  int num2 = getenv("b");

  int c = num1 + num2;
  cout<<c;
  return 0;
}