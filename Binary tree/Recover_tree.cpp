// https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/

#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        stack<TreeNode*> st;
        int i = 0, n = traversal.size();

        while (i < n) {
            int depth = 0;
            // Count the number of dashes to determine depth
            while (i < n && traversal[i] == '-') {
                depth++;
                i++;
            }

            // Extract the numerical value of the node
            int val = 0;
            while (i < n && isdigit(traversal[i])) {
                val = val * 10 + (traversal[i] - '0');
                i++;
            }

            // Create the new node
            TreeNode* node = new TreeNode(val);

            // If stack size is equal to depth, attach as left child
            if (depth == st.size()) {
                if (!st.empty()) {
                    st.top()->left = node;
                }
            } else {
                // Pop stack until we reach the correct parent level
                while (st.size() > depth) {
                    st.pop();
                }
                st.top()->right = node;
            }

            // Push the current node onto the stack
            st.push(node);
        }

        // The first element in the stack is the root
        while (st.size() > 1) {
            st.pop();
        }
        return st.top();
    }
};

// Helper function to print the tree in preorder
void printPreorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// Driver code
int main() {
    Solution sol;
    string traversal = "1-2--3--4-5--6--7";
    TreeNode* root = sol.recoverFromPreorder(traversal);

    // Output the tree in preorder to verify correctness
    printPreorder(root); // Expected Output: 1 2 3 4 5 6 7
    return 0;
}
