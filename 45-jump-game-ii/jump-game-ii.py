class Solution:
    def jump(self, nums: list[int]) -> int:
        ans = 0
        cj = 0
        b = 0 

        for i in range(len(nums)-1):
            cj = max(cj, i+nums[i])

            if i == b:
                b = cj
                ans += 1
            
            if b >= len(nums)-1: return ans

        return ans