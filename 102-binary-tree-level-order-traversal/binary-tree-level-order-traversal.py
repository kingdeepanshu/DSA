# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode | None) -> list[list[int]]:
        q = []
        ans = []
        if root == None: return ans

        q.append(root)
        while q:
            s = len(q)
            a = []
            for i in range(s):
                f = q[0]
                q.pop(0)
                a.append(f.val)
                if f.left: q.append(f.left)
                if f.right: q.append(f.right)
            ans.append(a)
        
        return ans