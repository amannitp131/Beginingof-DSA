#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int size; // size of the array
    int top1;
    int top2;

public:
    Stack(int size) {
        arr = new int[size]; // creates a new array object with size elements
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // Push function for stack1
    void push1(int data) {
        if (top1 >= top2 - 1) {
            cout << "STACK1 OVERFLOW" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }

    // Push function for stack2
    void push2(int data) {
        if (top2 <= top1 + 1) {
            cout << "STACK2 OVERFLOW" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }

    // Pop function for stack1
    void pop1() {
        if (top1 == -1) {
            cout << "STACK1 UNDERFLOW, cannot delete element" << endl;
        } else {
            top1--;
        }
    }

    // Pop function for stack2
    void pop2() {
        if (top2 == size) {
            cout << "STACK2 UNDERFLOW, cannot delete element" << endl;
        } else {
            top2++;
        }
    }

    // Top function for stack1
    int Top1() {
        if (top1 == -1) {
            cout << "STACK1 UNDERFLOW" << endl;
            return -1; // Returning -1 or some sentinel value to indicate underflow
        } else {
            return arr[top1];
        }
    }

    // Top function for stack2
    int Top2() {
        if (top2 == size) {
            cout << "STACK2 UNDERFLOW" << endl;
            return -1; // Returning -1 or some sentinel value to indicate underflow
        } else {
            return arr[top2];
        }
    }

    // Check if stack1 is empty
    bool isEmpty1() {
        return top1 == -1;
    }

    // Check if stack2 is empty
    bool isEmpty2() {
        return top2 == size;
    }

    // Function to get the size of stack1
    int getSize1() {
        return top1 + 1;
    }

    // Function to get the size of stack2
    int getSize2() {
        return size - top2;
    }
};

int main() {
    Stack s(15);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);

    cout << "Top of Stack1: " << s.Top1() << endl;
    cout << "Size of Stack1: " << s.getSize1() << endl;

    s.pop1();
    cout << "Top of Stack1 after pop: " << s.Top1() << endl;
    cout << "Size of Stack1 after pop: " << s.getSize1() << endl;

    // Example usage for stack2
    s.push2(100);
    s.push2(200);
    cout << "Top of Stack2: " << s.Top2() << endl;
    cout << "Size of Stack2: " << s.getSize2() << endl;

    s.pop2();
    cout << "Top of Stack2 after pop: " << s.Top2() << endl;
    cout << "Size of Stack2 after pop: " << s.getSize2() << endl;

    return 0;
}
