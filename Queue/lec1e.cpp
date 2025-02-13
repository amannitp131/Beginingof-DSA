#include<iostream>
#include<deque>
using namespace std;

int main(){
    //creation
    deque<int> dq;


    dq.push_front(11);
    dq.push_front(10);
    dq.push_back(12);
    dq.push_back(13);

    cout<<"size of deque "<<dq.size()<<endl;
    cout<<"front of deque "<<dq.front()<<endl;
    cout<<"back of deque "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"size of deque "<<dq.size()<<endl;
    cout<<"front of deque "<<dq.front()<<endl;
    cout<<"back of deque "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"size of deque "<<dq.size()<<endl;
    cout<<"front of deque "<<dq.front()<<endl;
    cout<<"back of deque "<<dq.back()<<endl;
}