class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void io(Node* root, vector<int> &bst){
        if(root == nullptr) return;
        io(root->left, bst);
        
        bst.push_back(root->data);
        
        io(root->right, bst);
    }
    bool isBST(Node* root) {
        // Your code here
        vector<int> bst;
        io(root, bst);
        for(int i = 1; i < bst.size(); i++){
            if(bst[i-1] > bst[i]) return false;
        }
        
        return true;
    }
};