void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (tail != NULL) {
        tail->Next = newNode;
    } else {
        head = newNode; // List was empty
    }
    tail = newNode;
}
