#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"element at top "<<st.top()<<endl;
    cout<<"size of stack "<<st.size()<<endl;

    //remove element
    st.pop();

    cout<<"element at top "<<st.top()<<endl;
    cout<<"size of stack "<<st.size()<<endl;

    if(st.empty()) cout<<"stack is empty";
    else cout<<"stack is not empty"<<endl;

//printing of stack
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}