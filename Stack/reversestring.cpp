#include <iostream>
#include <stack>
using namespace std;

 int main()
{
    string s="MISHRA";
    stack<char>ch;
    for(int i=0;i<s.size();i++){
        ch.push(s[i]);
    }
    while(!ch.empty()){
        cout<<ch.top()<<" ";
        ch.pop();
    }

   

}
