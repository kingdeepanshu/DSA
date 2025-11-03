/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        if(!root) return -1;
        // code here
        int r = height(root->right);
        int l = height(root->left);
        
        return max(r, l) + 1;
    }
};