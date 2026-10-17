class Solution:
    def rob(self, nums: list[int]) -> int:
        @cache
        def fun(n):
            if n < 0: return 0

            return max(fun(n-2)+nums[n], fun(n-1))

        return fun(len(nums)-1)