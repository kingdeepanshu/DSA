class Solution:
    def removeStars(self, s: str) -> str:
        stk = []

        for i in s:
            if i == '*':
                stk.pop()
            else:
                stk.append(i)
        
        ans = ""
        
        for i in stk:
            ans += i
        
        return ans
            
        