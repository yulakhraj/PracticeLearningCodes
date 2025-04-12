#include <iostream>
using namespace std;
class demo               
{
public:
    int a,b;
    demo(int a, int b){
        this->a=a;
        this->b=b;
    }
    int sum(int a, int b){
        return(a+b);
    }
};
class ftop : public demo     
{
public:
    int id;
    ftop(int a1, int a2, int a3 ):demo (a,b) 
    {
        id=a1;
    }
};
int main()
{
    demo d1(2,3);
    ftop f1(2,4,3);
    return 0;
}