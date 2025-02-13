#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<char> &s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insert_at_bottom(s,target);
    s.push(temp);

}
void reverse(stack<char> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,temp);

}


 int main()
{
    string s="MISHRA";
    stack<char>ch;
    for(int i=0;i<s.size();i++){
        ch.push(s[i]);
    }
   reverse(ch);
   while(!ch.empty()){
      cout<<ch.top()<<" ";
      ch.pop();
   }



   

}
