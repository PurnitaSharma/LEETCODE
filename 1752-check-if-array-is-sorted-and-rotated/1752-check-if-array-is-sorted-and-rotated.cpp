class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0,i=1;
        while(i<nums.size())
        {
            if(nums[i-1]>nums[i])
            {
                count++;
               
            }
             i++;
            
        }
        if(nums[nums.size()-1]>nums[0])
            count++;
        
        return count<=1;
    }
};