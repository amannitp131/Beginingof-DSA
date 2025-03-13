#include <bits\stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left, * right;
    
        Node(int key) {
            data = key;
            left = nullptr;
            right = nullptr;
        }
    };

int main(){

    Node* firstNode = new Node(2);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(4);
    Node* fourthNode = new Node(5);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;
    return 0;

}