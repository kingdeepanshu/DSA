# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode | None) -> bool:
        def sim(p, q):
            if p is None and q is None:
                return True
            if p is None and q is not None:
                return False
            if p is not None and q is None:
                return False
            
            if p.val != q.val: return False
            else:
                return sim(p.left, q.right) and sim(p.right, q.left)
            

        return sim(root.left, root.right)
        