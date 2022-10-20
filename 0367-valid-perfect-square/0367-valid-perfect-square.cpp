class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start=0,high=num,mid;
        while(start<=high)
        {
            mid=(start+high)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                start=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};