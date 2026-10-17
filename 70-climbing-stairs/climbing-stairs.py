class Solution:
    def climbStairs(self, n: int) -> int:
        @cache
        def fun(n):
            if n == 0:
                return 0
            if n == 1:
                return 1
            if n == 2: return 2

            return fun(n-1)+fun(n-2)

        return fun(n)