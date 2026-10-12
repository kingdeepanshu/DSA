class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        v = ['a', 'e', 'i', 'o', 'u']
        l = 0
        r = 0
        m = 0
        while r < k:
            if s[r] in v:
                m += 1
            r += 1
        
        ans = m

        while r < len(s):
            if s[r] in v:
                m += 1
            if s[l] in v:
                m -= 1
            l += 1
            r += 1
            ans = max(m, ans)
        return ans
            

        