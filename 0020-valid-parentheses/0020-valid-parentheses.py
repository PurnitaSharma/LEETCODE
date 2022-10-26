class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        sets=("()","{}","[]")
        for c in s:
            if c=="(" or c=="{" or c=="[":
                stack.append(c)
            else:
                if len(stack)==0:
                    return False
                if stack[-1]+c in sets:
                    stack.pop()
                else:
                    return False
        if len(stack)==0:
            return True
        else:
            return False