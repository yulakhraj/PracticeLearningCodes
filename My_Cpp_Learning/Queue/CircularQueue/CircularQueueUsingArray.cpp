#include<iostream>
using namespace std;


class QueueArray{
    int capacity;
    int rear;
    int *arr;
public:
    QueueArray(int size){
        capacity=size;
        rear=-1;
        arr=new int[size];
    }
    
    void enque(int value){
        if(rear==capacity-1){
            cout<<"no space";
        }
        rear++;
        arr[rear]=value;
    }
    void deque(){
        if(rear==-1){
            cout<<"alreay empty";
        }
        int result = arr[0];
        for(int i=0;i<rear;i++){
            arr[i]=arr[i+1];
        }
        rear--;
        cout<<result;
    }
    void display(){
        cout<<"The elements are: ";
        for(int i=0;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    QueueArray q1(10);
    q1.enque(10);
    q1.display();
    
    return 0;
}