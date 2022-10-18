class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum1=0,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];
            if(sum1>maxi)
                maxi=sum1;
            if(sum1<0)
                sum1=0;
        }
        return maxi;
    }
};