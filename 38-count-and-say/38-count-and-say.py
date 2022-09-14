class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        elif n==2:
            return '11'
        else:
            s='11'
            for i in range(3,n+1):
                t=''
                s=s+'#'
                count=1
                for j in range(1,len(s)):
                    if s[j]!=s[j-1]:
                        t=t+str(count)
                        t=t+s[j-1]
                        count=1
                    else:
                        count=count+1
                s=t
            return s