#include <iostream>
using namespace std;

    class circularQueue{
        public:
        int *arr;
        int size;
        int front;
        int rear;
        
        circularQueue(int size){
            this->size=size;
            arr= new int[size];
            front=-1;
            rear=-1;
        }
        void push(int element){
            //queue is full
            if(rear==front-1 ||( rear==size-1 && front==0)){
                cout<<" Queue is full";
            }
            //single element
            else if(front==-1){
                front=rear=0;
                arr[rear]=element;   
            }
            //circular nature
            else if(rear==size-1 && front!=0){
                rear=0;
                arr[rear]=element;
            }else{
                rear++;
                arr[rear]=element;
            }
        }
        void pop(){
            //empty check
            if(front==-1){
                cout<<"queue is empty";
                //single element
            }else if(front==rear){
                arr[front]=-1;
                front=rear=-1;
                //circular nature
            }else if(front=size-1){
                front=0;
            }else{
                front++;
            }
        }
 };

