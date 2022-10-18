class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        l=[]
        for i in range(1,n+1):
            if i%3==0 and i%5==0:
                l.append("FizzBuzz")
            elif i%3==0:
                l.append("Fizz")
            elif i%5==0:
                l.append("Buzz")
            else:
                i=str(i)
                l.append(i)
                i=int(i)
        return l