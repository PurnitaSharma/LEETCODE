class Solution {
public:
    bool perfectsquare(long int n)
    {
        if(n==0 || n==1)
            return true;
        long int low=0,high=n,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid == n)
                return true;
            else if(mid*mid < n)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        if(c==1 || c==0)
            return true;
        for(long int i=0;i*i<=c;i++)
        {
            long int x=i*i;
            if(perfectsquare(c-x))
                return true;
        }
        return false;
    }
};