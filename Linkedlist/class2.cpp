#include<bits/stdc++.h>
using namespace std;

   class Node{
        public:
        int data;
        Node* next;
        Node* prev;

        Node(){
            this->data=0;
            this->next=NULL;
            this->prev=NULL;
        }
         Node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
    };

    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    int getlength(Node* head){
        int i=0;
        Node* temp = head;
        while(temp!=NULL){
            i++;
            temp = temp->next;
        }
        return i;
    }
    void insertAthead(Node*& head,Node*& tail,int value){ //address ke sath pass krna h head,tail ko tb change reflect hoga
        if(head==NULL ){
            Node*  newNode = new Node(value);
            head= newNode;
            tail= newNode;
        }else{
        Node*  newNode = new Node(value);
        newNode->next= head;
        head->prev=newNode;
        head=newNode;
        }
        
    }
     void insertAttail(Node*& head,Node*& tail,int value){ //address ke sath pass krna h head,tail ko tb change reflect hoga
        if(tail==NULL ){
            Node*  newNode = new Node(value);
            head= newNode;
            tail= newNode;
        }else{
        Node*  newNode = new Node(value);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        }
        
    }

  void insertAtposition(Node*& head,Node*& tail,int value,int pos){ 
    int l= getlength(head);
        if(tail==NULL ){
            Node*  newNode = new Node(value);
            head= newNode;
            tail= newNode;
        }else if(pos==1){
          insertAthead(head,tail,value);
        }
        
        else if(pos==l){
          insertAttail(head,tail,value);
        } else{
            int i=0;
             Node* newNode = new Node(value);
    Node* currNode = head;
    Node* prevNode = new Node();
        while(i < pos-1){
          prevNode = currNode;
           currNode = currNode->next;
          i++;

        }
        
        prevNode->next=newNode;
        currNode->prev=newNode;
        newNode->next=currNode;
        newNode->prev=prevNode;
        }
        
    }
    void DeleteAtPosition(Node*& head, Node*& tail, int pos) {
    if (head == NULL) {
        cout << "Linked list is empty";
        return;
    }

    if (head->next == NULL) {
        // List has only one node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    if (pos == 1) {
        // Want to delete the first node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL; 
        delete temp;
        return;
    }

    int len = getlength(head);
    if (pos > len) {
        cout << "Enter a valid position";
        return;
    }

    if (pos == len) {
        // Want to delete the last node
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL; 
        delete temp;
        return;
    }

    // Deleting a node in the middle
    int i = 1;
    Node* current = head;

    while (i < pos) {
        current = current->next;
        i++;
    }

    Node* left = current->prev;
    Node* right = current->next;

    left->next = right;
    right->prev = left;

    current->next = NULL; 
    current->prev = NULL;
    delete current;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    Node* head = first;
    Node* tail = fourth;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->next=fourth;
    fourth->prev=third;



insertAthead(head,tail,50);
DeleteAtPosition(head,tail,2);

print(head);
    
 

}