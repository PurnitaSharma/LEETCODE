class Solution {
public:
    void solve(vector<int>& nums , int n , int index , vector<vector<int>>& ans)
    {
        if(index >= n)
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++)
        {
            swap(nums[index] , nums[i]);
            solve(nums , n , index+1 , ans);
            swap(nums[index] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int index = 0 , n = nums.size();
        solve(nums , n , index, ans);
        return ans;
    }
};