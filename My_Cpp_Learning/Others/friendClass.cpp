#include<iostream>
using namespace std;

class Student{
    int a;
protected:
    int b;
public:
    Student(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend class friendclass;
};
class friendclass{
public:
    void accessmember(Student &obj){            //takes refrence to an instance of student class
        obj.a=10;
        obj.b=20;
    }

};
int main(){
    Student obj(10,20);
    return 0;
}