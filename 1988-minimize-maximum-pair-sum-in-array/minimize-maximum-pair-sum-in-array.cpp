class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int left = 0 , right = nums.size()-1 , ans = INT_MIN;
        while(left < right)
        {
            int temp = nums[left]+nums[right];
            ans = max(ans , temp);
            left++;
            right--;
        }
        return ans;
    }
};