#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        cout << "default A";
    }
    explicit A(int ta) : a(ta)
    {
        cout << "A is called";
    }
    int geta()
    {
        return a;
    }
};
int main()
{
    A(12);
    cout << endl;
    A();
    cout << endl;
    cout<< A(20).geta();

    return 0;
}