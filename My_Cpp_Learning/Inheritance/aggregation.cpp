#include <iostream>
using namespace std;

class date
{
private:
    int dd;
    int mm;
    int yy;
public:
    void setdd(int tdd)
    {
        dd = tdd;
    }
    int getdd()
    {
        return(dd);
    }
    void setmm(int tmm)
    {
        mm = tmm;
    }
    int getmm()
    {
        return(mm);
    }
    void setyy(int tyy)
    {
        yy = tyy;
    }
    int getyy()
    {
        return(yy);
    }
};

 

class info
{
private:
    string name;
    date dob; //aggragration
public:
    info(string tnm, date tdob)
    {
        name= tnm;
        dob.setdd(tdob.getdd());
        dob.setmm(tdob.getmm());
        dob.setyy(tdob.getyy());
    }
    void display()
    {
        cout << "\n name = " << name;
        cout << "\n Date of Birth : " << dob.getdd() << "/" << dob.getmm() << "/" << dob.getyy();
    }
};
int main()
{
    date dt;
    dt.setdd(10);
    dt.setmm(9);
    dt.setyy(2010);

    info obj("abcdef", dt);
    obj.display();

}
