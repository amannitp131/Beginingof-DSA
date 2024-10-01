#include <bits/stdc++.h>
using namespace std;
int main(){
    //create queue
    queue<int> q;
    //insertion in queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //size of queue
    cout<<"size of queue is :"<<q.size()<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<"size of queue is :"<<q.size()<<endl;

   // is queue empty
   if(q.empty()) cout<<"queue is  empty"<<endl;
   else cout<<"queue is not empty"<<endl;

   q.emplace(6);

     cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.push(7);
     cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}
