class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.split()
        n=len(s)
        #print(s[n-1])
        return len(s[n-1])