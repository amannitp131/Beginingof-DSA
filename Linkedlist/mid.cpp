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
    
    if (tail == NULL) {
        tail = newNode;
        head = newNode;
    }else{
    newNode->Next = head;
    head = newNode;
    }
}

// To insert at the tail
void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (tail == NULL) {
        head = newNode; 
        tail = newNode;
    } else {
      tail->Next = newNode;
}
}
int findlenth(Node* head){
    int i=0;
    Node* temp = head;
    while(temp->Next!=NULL){
        temp=temp->Next;
        i++;
    }
    return i;
}

void insertatposition(Node*& head, Node*& tail, int data,int position){
    if(head == NULL){
     Node* newNode = new Node(data);
     head = newNode; 
    tail = newNode;
    return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    if(position==findlenth(head)){
        insertAtTail(head,tail,data);
        return;
    }

        //step 1 find position of prev and curr
        int i=1;
        Node* prev =head;
        while(i<position){
            prev=prev->Next;
            i++;
        }
        Node* curr = prev->Next;

        //step2  create  a node
        Node* newNode = new Node(data);

        //step3
        newNode->Next=curr;

        //step4
        prev->Next=newNode;
    }

   int middle_pos(Node* &head){
    if(head==NULL){
        
        return 0 ;
    }
    if(head->Next==NULL){
        return head->data;
    }
      Node* fast = head;
      Node* slow = head;
      while(fast!=NULL){
        fast=fast->Next;
        if(fast!=NULL){
          fast=fast->Next;
          slow= slow->Next;
        }
        
        

      }
      return slow->data;
   }






int main() {
    Node* head = NULL;  // Initialize head
    Node* tail = NULL;  // Initialize tail
    
    insertAtHead(head, tail, 10); // List: 10
    insertAtHead(head, tail, 20); // List: 20 -> 10
    insertAtHead(head, tail, 30); // List: 30 -> 20 -> 10
    insertAtHead(head, tail, 40); // List: 40 -> 30 -> 20 -> 10
    insertAtTail(head, tail, 5);  // List: 40 -> 30 -> 20 -> 10 -> 5
    insertAtHead(head, tail, 7);

    print(head);
    cout<<endl;

    /////////////////////////////////////
    //// TO find mid element
    /////////////////////////////////////
cout<<middle_pos(head);


   

    return 0;
}
