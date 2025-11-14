/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int ans;
    public void solve(TreeNode root, int m){
        if(root == null) return;

        if(root.val >= m) {
            this.ans++;
            m = Math.max(m, root.val);
        }

        solve(root.left, m);

        solve(root.right, m);
    }
    public int goodNodes(TreeNode root) {

        int m = root.val;

        this.ans = 0;

        solve(root, m);

        return ans;
    }
}