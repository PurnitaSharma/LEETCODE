class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            int low = i+1 , high = n-1;
            int sum = 0-nums[i];
            while(low < high)
            {
                if(sum == nums[low] + nums[high])
                {
                    s.insert({nums[i] , nums[low] , nums[high]});
                    low++;
                    high--;
                }
                else if(nums[low] + nums[high] > sum ) high--;
                else low++;
            }
        }
        for(auto i : s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};