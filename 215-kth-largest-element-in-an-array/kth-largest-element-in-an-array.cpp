class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        int n = nums.size();
        
        if(n<k) return -1;
        k=k-1;
        for(int i=0;i<n;i++)
        {
            p.push(nums[i]);
        }
        while(k--)
        {
            p.pop();
        }
        return p.top();
    }
};