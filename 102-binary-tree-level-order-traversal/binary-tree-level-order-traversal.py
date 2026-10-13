# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode | None) -> list[list[int]]:
        if root == None: return []
        q = []
        q.append(root)
        ans = []
        while q != []:
            s = len(q)
            a = []
            for i in range(s):
                front = q[0]
                q.pop(0)
                a.append(front.val)

                if front.left:
                    q.append(front.left)
                if front.right:
                    q.append(front.right)
            ans.append(a)
        
        return ans
