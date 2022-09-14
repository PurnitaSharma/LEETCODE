class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices)<=1:
            return 0
        maxp=0
        sprice=prices[0]
        for i in range(0,len(prices)):
            if prices[i]<sprice:
                sprice=prices[i]
            elif prices[i]-sprice>maxp:
                maxp=prices[i]-sprice
        return maxp