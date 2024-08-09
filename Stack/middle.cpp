//find middle element in a stack
#include <iostream>
#include <stack>
using  namespace std;

void middleofstack(stack<int> s,int totalsize){
    if(s.size()==0) cout<<"STACK UNDERFLOW";
    //base case
    if(s.size()==totalsize/2+1){
     cout<<"middle of element is "<<s.top()<<endl;
     return;
    }
    int temp= s.top();
    s.pop();
    //recursive call
    middleofstack(s,totalsize);
    //backtrack
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    
    

    middleofstack(s,7);
    

}