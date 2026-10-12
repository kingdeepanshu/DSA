class Solution:
    def longestSubarray(self, nums: list[int]) -> int:
        l = 0
        r = 0
        m = 0
        ans = m
        k = 1
        while r < len(nums):
            if nums[r] == 1:
                m += 1
            else:
                m+=1
                k-=1
            r += 1

            while k == -1:
                if nums[l] == 1:
                    m -= 1
                else: 
                    m-=1
                    k+=1
                l +=1
                
            ans = max(m, ans)
        return ans-1
        

        