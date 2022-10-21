class Solution {
public:
    int mySqrt(int x) {
        long long int low=0,high=x,mid,ans;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid < x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                //ans=mid;
                high=mid-1;
            }
            
        }
        return ans;
    }
};