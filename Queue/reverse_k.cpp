#include <bits/stdc++.h>
using  namespace std;
void reverse_k(queue<int> &q,int k){
     // Base case: if queue is empty, return
     int count =0;
    if (count==k) {
        return;
    }
    int t=q.front();
    q.pop();
    count++;
    reverse_k(q,k);
    q.push(t);
}
void print(queue<int> q){
    while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);

    reverse_k(q,3);
    
    print(q);
    
}