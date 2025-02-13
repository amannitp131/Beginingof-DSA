#include <bits/stdc++.h>
using  namespace std;
void reverse(queue<int> &q){
     // Base case: if queue is empty, return
    if (q.empty()) {
        return;
    }
    int t=q.front();
    q.pop();
    reverse(q);
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

    reverse(q);
    
    print(q);
    
}