class Solution:
    def reverse(self, x: int) -> int:
        
        strin = str(x)
        if strin[0] == '-':
            strin = strin[1:][::-1]
            strin = '-' + strin
        else:
            strin = strin[::-1]
    
        if int(strin) not in range(-2**31, 2**31):
            return 0
        else:
            return int(strin)