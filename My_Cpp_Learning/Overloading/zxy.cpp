#include <iostream>
using namespace std;
class demo      // Array of objects 
{
public:
    int a;
    int b;
public:
    void seta(int a)
    {
        this->a = a;
    }
    int geta()
    {
        return(a);
    }
    void setb(int b)
    {
        this->b = b;
    }
    int getb()
    {
        return(b);
    }
    demo(int x,int y){
        this->a=x;
        this->b=y;
    }
};

int main()
{
    int n, ta, tb;
    cout << "\n How many objects : ";
    cin >> n;

    demo **ptr=new demo*[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "\n Enter values for " << (i + 1) << " Object :";
        cout << "\n a : ";
        cin >> ta;
        cout << "\n b : ";
        cin >> tb;
        ptr[i] = new demo(ta,tb);
        //ptr[i]->seta(ta);
        //ptr[i]->setb(tb);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "\n Object Number : " << (i + 1) << endl;
        //cout<<"\n a = "<<ptr[i]->geta()<<"\t b = "<<ptr[i]->getb();
        cout<<"\n a = "<<ptr[i]->a<<"\t b = "<<ptr[i]->b;

    }



    
}