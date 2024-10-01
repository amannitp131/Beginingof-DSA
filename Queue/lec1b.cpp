#include <iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int element){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear]=element;
            rear++;
        }
    }
    void pop(){
        if(rear==front){
           cout<<"Queue is empty"<<endl; 
        }else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                 rear=0;
            }
        }
    }
    int getFront(){
         if(rear==front){
           cout<<"Queue is empty"<<endl; 
           return -1;
        }
        return arr[front];
    }
     int getBack(){
         if(rear==front){
           cout<<"Queue is empty"<<endl; 
           return -1;
        }
        return arr[rear];
    }
    int getSize(){
        return rear-front;
    }
    bool isEmpty(){
         if(front==rear){
            return true;
         }else{
            return false;
         }
    }
};
int main(){

//declare queue
Queue q(10);
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
cout<<q.getSize()<<endl;
cout<<q.getFront()<<endl;
cout<<q.getBack()<<endl;

q.pop();
cout<<q.getSize()<<endl;
cout<<q.getFront()<<endl;







}
