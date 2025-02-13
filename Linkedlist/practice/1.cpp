#include <iostream>
using namespace std;
class Node{
    int data;
    Node* next;

    Node(){
        next=NULL;

    }
    Node(int a){
        data=a;
        next=NULL;
    }
};