class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        i=0
        j=0
        l=0
        while(j<len(s)):
            if s[j] in s[i:j]:
                l=max(l,j-i)
                i+=(s[i:j].index(s[j])+1)
            elif j==len(s)-1:
                l=max(l,j-i+1)
            j+=1
        return l