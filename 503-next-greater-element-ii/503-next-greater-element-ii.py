class Solution:
    def nextGreaterElements(self, a: List[int]) -> List[int]:
        n=len(a)
        s=[]
        r=[-1]*n
        top=-1
        for i in range(n-2,-1,-1):
            while top>=0 and s[top]<=a[i]:
                s.pop()
                top=top-1
            top=top+1
            s.append(a[i])
            
        for i in range(n-1,-1,-1):
            while top>=0 and s[top]<=a[i]:
                s.pop()
                top=top-1
            if top==-1:
                r[i]=-1
            else:
                r[i]=s[top]
            top=top+1
            s.append(a[i])
        return r