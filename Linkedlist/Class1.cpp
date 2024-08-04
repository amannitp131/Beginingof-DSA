#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;
    
    Node() : data(0), Next(NULL) {}
    Node(int data) : data(data), Next(NULL) {}
};

// To print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

// To insert at the head
void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    newNode->Next = head;
    head = newNode;
    if (tail == NULL) {
        tail = newNode;
    }
}

// To insert at the tail
void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (tail != NULL) {
        tail->Next = newNode;
    } else {
        head = newNode; // List was empty
    
    tail = newNode;
}

int main() {
    Node* head = NULL;  // Initialize head
    Node* tail = NULL;  // Initialize tail
    
    insertAtHead(head, tail, 10); // List: 10
    insertAtHead(head, tail, 20); // List: 20 -> 10
    insertAtHead(head, tail, 30); // List: 30 -> 20 -> 10
    insertAtHead(head, tail, 40); // List: 40 -> 30 -> 20 -> 10
    insertAtTail(head, tail, 5);  // List: 40 -> 30 -> 20 -> 10 -> 5
    
    print(head); // Should print: 40 30 20 10 5

    return 0;
}
