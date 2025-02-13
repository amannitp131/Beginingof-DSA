#include <iostream>
using namespace std;

class DeQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    DeQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int element) {
        // Queue is full
        if ((rear == front - 1) || (rear == size - 1 && front == 0)) {
            cout << "Queue is full\n";
            return;
        }
        // Single element condition (empty queue initially)
        else if (front == -1) {
            front = rear = 0;
        }
        // Circular nature for rear insertion
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = element;
    }

    void pushFront(int element) {
        // Queue is full
        if ((rear == front - 1) || (rear == size - 1 && front == 0)) {
            cout << "Queue is full\n";
            return;
        }
        // Single element condition (empty queue initially)
        else if (front == -1) {
            front = rear = 0;
        }
        // Circular nature for front insertion
        else if (front == 0 && rear != size - 1) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = element;
    }

    void popFront() {
        // Empty check
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[front] = -1;
            front = rear = -1;
        }
        // Circular nature
        else if (front == size - 1) {
            arr[front] = -1;
            front = 0;
        } else {
            arr[front] = -1;
            front++;
        }
    }

    void popRear() {
        // Empty check
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[rear] = -1;
            front = rear = -1;
        }
        // Circular nature
        else if (rear == 0) {
            arr[rear] = -1;
            rear = size - 1;
        } else {
            arr[rear] = -1;
            rear--;
        }
    }

    void print() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        int i = front;
        cout << "Queue: ";
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~DeQueue() {
        delete[] arr;
    }
};

int main() {
    DeQueue dq(10);
    dq.print();
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.print();
    dq.popRear();
    dq.print();
    dq.popFront();
    dq.print();
}
