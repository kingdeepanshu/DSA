/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void io(Node* root, vector<int> &ans){
        if(root == nullptr) return;
        if(root->left) io(root->left, ans);
        ans.push_back(root->data);
        if(root->right) io(root->right, ans);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        io(root, ans);
        return ans;
    }
};