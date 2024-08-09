//1 Stack in one array creation

#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int size; // size of the array
public:
    Stack(int size) {
        arr = new int[size]; // creates a new array object with size elements
        this->size = size;
        top = -1;
    }

    // Destructor to deallocate the array
    ~Stack() {
        delete[] arr;
    }

    // Push function
    void push(int data) {
        // Check if space is available
        if (top < size - 1) {
            top++;
            arr[top] = data;
        } else {
            // Space not available
            cout << "STACK OVERFLOW" << endl;
        }
    }

    // Pop function
    void pop() {
        // Check if stack is empty
        if (top == -1) {
            cout << "STACK UNDERFLOW, cannot delete element" << endl;
        } else {
            top--;
        }
    }

    // Top function
    int Top() {
        // Check if stack is empty
        if (top == -1) {
            cout << "STACK UNDERFLOW" << endl;
            return -1; // Returning -1 or some sentinel value to indicate underflow
        } else {
            return arr[top];
        }
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to get the size of the stack
    int getSize() {
        return top + 1;
    }
};

int main() {
    Stack s(15);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty()) {
        cout << s.Top() << " " << endl;
        s.pop();
    }
    cout<<s.getSize()<<endl;
    s.pop();

    return 0;
}
