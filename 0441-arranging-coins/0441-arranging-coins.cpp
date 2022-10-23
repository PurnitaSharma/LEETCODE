class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(1)
        {
            
            if(n>=i)
            {
                n-=i;
                i+=1;
            }
            else
                break;
        }
        return i-1;
    }
    
};