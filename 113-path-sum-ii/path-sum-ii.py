# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: TreeNode | None, targetSum: int) -> list[list[int]]:
        ans = []
        def f(root, a, m):
            nonlocal ans
            if root is None: return None

            a.append(root.val)
            m += root.val
            
            if root.left is None and root.right is None:
                if m == targetSum:
                    ans.append(a.copy())
            
            
            f(root.left, a, m)

            f(root.right, a, m)
            a.pop()
        
        f(root, [], 0)
        return ans



