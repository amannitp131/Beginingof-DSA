#include <iostream>
#include <stack>
using namespace std;

void insertsorted(stack<int> &s, int target) {
    // Base case: if stack is empty or the top element is less than or equal to target
    if (s.empty() || s.top() > target) {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();
    
    // Recursive call to insert the target in the sorted stack
    insertsorted(s, target);
    
    // Backtrack: push the element back to the stack
    s.push(temp);
}

void sortstack(stack<int> &s) {
    // Base case: if stack is empty, return
    if (s.empty()) {
        return;
    }

    int topelem = s.top();
    s.pop();
    
    // Recursive call to sort the remaining stack
    sortstack(s);
    
    // Backtrack: insert the top element back into the sorted stack
    insertsorted(s, topelem);
}

int main() {
    stack<int> s;
    s.push(2);
    s.push(9);
    s.push(7);
    s.push(3);
    s.push(5);

    sortstack(s);

    // Display stack content
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
