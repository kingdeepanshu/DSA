/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            
            vector<int> a;
            
            for(int i = 0; i < s; i++){
                Node* t = q.front();
                q.pop();
                
                a.push_back(t->data);
                
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(a);
        }
        return ans;
    }
};