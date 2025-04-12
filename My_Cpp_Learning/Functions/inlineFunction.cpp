#include <iostream>
using namespace std;
class sample
{
    private:
        int a;
        int b;
    public:
        inline void readdata();
        inline void display();
};
void sample::readdata()
{
    cout<<"\n a :";
    cin>>a;
    cout<<"\n b :";
    cin>>b;
}
void sample::display()
{
    cout<<"\n a : "<<a;
    cout<<"\n b : "<<b;
}
int main()
{
    sample ob;
    ob.readdata();
    ob.display();
    return 0;
}