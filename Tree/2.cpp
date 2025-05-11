// Balanced binary tree
#include <bits\stdc++.h>
#include <algorithm> 
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    public:
        int solve(TreeNode* root) {
            if(root==nullptr) return 0;
    
            int lh=solve(root->left);
            if(lh==-1) return -1;
            int rh=solve(root->right);
            if(rh==-1) return -1;
            if(abs(lh-rh)>1) return -1;
            return 1+max(lh,rh);
        }
        bool isBalanced(TreeNode* root) { 
            return solve(root) != -1;
        }
};

int main() {
    // Example usage of the Solution class
    Solution solution;

    // Create a sample tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Check if the tree is balanced
    if (solution.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}