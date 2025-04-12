#include <iostream>
using namespace std;

class students
{
private:
    int roll;
    string name;
public:
    void setroll(int roll)
    {
        roll = roll;
    }
    int getroll()
    {
        return(roll);
    }
    void setname(string name)
    {
        name = name;
    }
    string getname()
    {
        return(name);
    }
};
class sample
{
private:
    float a;
    float b;
public:
    void seta(float ta)
    {
        a = ta;
    }
    float geta()
    {
        return(a);
    }
    void setb(float tb)
    {
        b = tb;
    }
    float getb()
    {
        return(b);
    }
};

int main(){
    //demo <int, int> ob;
    return 0;
}