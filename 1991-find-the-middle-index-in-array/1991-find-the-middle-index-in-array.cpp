class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0,n=nums.size(),sum2=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        for(int i=0;i<n;i++)
        {
            sum-=nums[i];
            if(sum==sum2)
                return i;
            sum2+=nums[i];
            
        }
        return -1;
    }
};