class Solution:
    def longestPalindrome(self, s: str) -> int:
        d={}
        b=set(s)
        for i in s:
            d[i]=s.count(i)
        ans=0
        odd=0
        for i in b:
            if d[i]%2==0:
                ans+=d[i]
            else:
                odd=1
                ans+=d[i]-1
        if odd==0:
            return ans
        else:
            return ans+1
            
        