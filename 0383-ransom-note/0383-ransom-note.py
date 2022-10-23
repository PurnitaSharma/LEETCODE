class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        #magazine=set(magazine)
        magazine=list(magazine)
        ransomNote=list(ransomNote)
        
        for i in ransomNote:
            if i in magazine:
                s=magazine.index(i)
                magazine[s]='_'
                i='_'
            else:
                return False
        return True