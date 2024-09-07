#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s,int target){
    //Base case
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    //recursive call
    solve(s,target);
    //backtrack
    s.push(temp);

}


void insertatbottom(stack<int> &s){
    if(s.empty()) {
        cout<<"STACK INDERFLOW cannot insert at bottom";
        return;
    }
   int target=s.top();
    s.pop();
    solve(s,target);
}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

  insertatbottom(s);
   // Display stack content
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
