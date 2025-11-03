/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        queue<Node*> q;
        q.push(root);
        
        stack<int> st;
        
        while(!q.empty()){
            int s = q.size();
            stack<int> sa;
            
            for(int i = 0; i < s; i++){
                Node* front = q.front();
                q.pop();
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
                sa.push(front->data);
            }
            while(!sa.empty()){
                st.push(sa.top());
                sa.pop();
            }
        }
        
        vector<int> ans;
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};