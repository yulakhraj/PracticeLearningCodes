#include <iostream>
using namespace std;
class Animal                
{
public:
    void eat()
    {
        cout << "Animal class..." << endl;
    }
    Animal(){
        cout<<"animal constructor called\n";
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog class ..." << endl;
    }
    Dog(){
        cout<<"\nDog constructor called";
    }
};
class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "BabyDog...";
    }
    BabyDog(){
        cout<<"\nBabyDog constructor called";
    }
};
int main()
{
    BabyDog bd1;
    bd1.eat();
    bd1.bark();
    bd1.weep();
    return 0;
}
