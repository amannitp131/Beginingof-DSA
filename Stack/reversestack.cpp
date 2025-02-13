#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &s,int target){
    //Base case
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    //recursive call
    insert_at_bottom(s,target);
    //backtrack
    s.push(temp);

}

void reverse(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();
    //reverse stack
    reverse(s);
    //insert at bottom target ko
    insert_at_bottom(s,target);

    
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    

    reverse(s);

     // Display stack content
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}