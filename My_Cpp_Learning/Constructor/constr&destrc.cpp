#include <iostream>
using namespace std;
class base
{
    private:
        int a;
        int b;
    public:
        base() {             // default constructor
            cout<<"default constructor  called";
        }          
        base(int a, int b)  // parametrizes constructor
        {
            cout<<"\n Base class constructor is called";
            this->a=a;
            this->b=b;
        }
        int geta()
        {
            return a;
        }
        int getb()
        {
            return b;
        }
        ~base()
        {
            cout<<"\n Base class Destructor called ";
        }
};
class derived : public base
{
    private:
        int x;
        int y;
    public:
        derived()
        {
            cout<<"derived default constructor";
        }
        derived(int a, int b, int c, int d):base(a,b)
        {
            cout<<"\n derived class constructor is called";
            this->x=c;
            this->y=d;
        }
        int getx()
        {
            return x;
        }
        int gety()
        {
            return y;
        }
        ~derived()
        {
            cout<<"\n Derived class Destructor called ";
        }
};

int main()
{
    derived ob(10,20,30,40);

    cout<<"\n a = "<<ob.geta();
    cout<<"\n b = "<<ob.getb();
    cout<<"\n x = "<<ob.getx();
    cout<<"\n y = "<<ob.gety();
    return 0;
}