class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0 , n = nums.size();
        map<int , int>m;
        priority_queue<int>p;
        for(int i=0;i<n;i++) m[nums[i]]++;
        for(auto i : m)
        {
            p.push(i.first);
        }
        while(p.size()!= 1)
        {
            int temp = p.top();
            p.pop();
            m[p.top()] += m[temp];
            ans += m[temp];
        }
        return ans;
    }
};