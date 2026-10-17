class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        l = 0
        r = len(nums)-1

        nums.sort()
        ans = 0

        while l < r:
            s = nums[l]+nums[r]
            if s == k:
                l += 1
                r -=1
                ans += 1
            elif s < k: l+=1
            else:
                r-=1
        
        return ans
        