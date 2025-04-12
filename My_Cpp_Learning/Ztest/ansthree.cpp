#include <iostream>
using namespace std;

class myexception : public exception {
private:
    const char* message;
public:
    myexception(const char* msg) : message(msg) {}
    virtual const char* what() const throw() {
        return message;
    }
};

// class myexception : public exception
// {
// public:
//     const char *what(const char *msg) const throw()
//     {
//         return (msg);
//     }
// };

void powerFunction(int n, int p)
{
    int res = 1;
    try
    {
        if (n == 0 && p <= 0)
        {
            throw myexception("Values are not positive.\n");
        }
        else if (n > 0 || n < 10)
        {
            throw myexception("range of n is n>0 and n<10.\n");
        }
        else if (p >= 1 || p <= 5)
        {
            throw myexception("p cannot be negative, and the range of p is 1 to 5.\n");
        }
        else
        {
            for (int i = 0; i < p; i++)
            {
                res *= n;
            }
            cout << "\nN**p == " << res;
        }
    }
    catch (myexception &exp)
    {
        cout <<exp.what();
    }
}

int main(){
    int n, p;
    cout << "Enter N: ";
    cin >> n;
    cout<<endl;
    cout << "Enter P: ";
    cin >> p;
    cout<<endl;
    powerFunction(n,p);
    
    return 0;
}