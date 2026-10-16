class Solution:
    def canJump(self, nums: list[int]) -> bool:
        a = 0

        for i in range(len(nums)):
            if i > a:
                return False
            else:
                a = max(a,i+nums[i])

        return True