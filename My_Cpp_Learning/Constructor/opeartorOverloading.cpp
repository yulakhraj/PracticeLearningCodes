#include <iostream>
using namespace std;

class Object {
   int data;
   public:
      void setData(int data){
         this->data = data; 
      }
      int getData(){
         return data;
      }  
      Object operator+(Object &o){
         Object res;
         res.setData(data+o.getData());
         return res;
      }  
};

int main() {
   Object o1, o2, o3; 

   o1.setData(10);
   o2.setData(20);

   o3 = o1 + o2;

   cout << o3.getData() << endl;

   return 0;  
}