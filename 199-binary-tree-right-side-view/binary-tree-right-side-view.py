# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: TreeNode | None) -> list[int]:
        if root is None: return []
        q = deque()
        ans = []
        q.append(root)

        while q:
            s = len(q)
            a = 0
            for i in range(s):
                f = q[0]
                q.popleft()
                a = f.val
                if f.left:
                    q.append(f.left)
                if f.right:
                    q.append(f.right)
            
            ans.append(a)
        
        return ans