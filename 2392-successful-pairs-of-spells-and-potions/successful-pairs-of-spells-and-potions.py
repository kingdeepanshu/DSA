class Solution:
    def successfulPairs(self, spells: list[int], potions: list[int], success: int) -> list[int]:
        def bs(lst, s, i):
            l = 0
            r = len(lst) -1
            a = 0
            ans = a
            while l <= r:
                m = l + (r-l)//2
                if i*lst[m] >= s:
                    a = len(lst) - m
                    r = m-1
                elif i*lst[m] < s:
                    l = m+1
                ans = max(a, ans)
            return ans
        
        ans = []
        lst = sorted(potions)
        for i in spells:
            ans.append(bs(lst, success, i))

        return ans