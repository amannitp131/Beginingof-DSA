#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// return root node of tree
Node *createTree()
{
    cout << "enter the value for node " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "left of node  of" << root->data << endl;
    root->left = createTree();
    cout << "right of node  of" << root->data << endl;
    root->right = createTree();
    return root;

}
void preOrderTraversal(Node* root){
    //base case
    if(root==NULL){
       return;
    }
    //N
    cout<<root->data<<" ";
    //L
    preOrderTraversal(root->left);
    //R
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    //base case
    if(root==NULL){
       return;
    }
    //L
    postOrderTraversal(root->left);
    //R
    postOrderTraversal(root->right);
    //N
    cout<<root->data<<" ";
}
void InOrderTraversal(Node* root){
    //base case
    if(root==NULL){
       return;
    }
    //L
    InOrderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
    InOrderTraversal(root->right);
}

int main()
{
    Node *root = createTree();
    cout << root->data;

    cout<<"Printing Preorder"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"Printing Postorder"<<endl;
    postOrderTraversal(root);
    cout<<endl;
    cout<<"Printing Inorder"<<endl;
    InOrderTraversal(root);
    cout<<endl;
}