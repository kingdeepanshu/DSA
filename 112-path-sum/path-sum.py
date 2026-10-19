# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode | None, targetSum: int) -> bool:
        if root == None: return False

        targetSum -= root.val

        if root.left == root.right == None and targetSum == 0: return True

        return self.hasPathSum(root.left, targetSum) or self.hasPathSum(root.right, targetSum)
        # def f(i, t):
        #     if i == None: return False

        #     t -= i.val

        #     if i.left == i.right == None and t == 0: return True

        #     return f(i.left, t) or f(i.right, t)

        # return f(root, targetSum)