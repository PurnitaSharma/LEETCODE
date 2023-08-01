class Solution {
public:
    void solve(int n , int k , int num , vector<int>&temp , vector<vector<int>>& ans)
    {
        if(k==0)
        {
            ans.push_back(temp);
            return;
        }
        if(num == n+1) return;

        solve(n , k , num+1,temp , ans);

        temp.push_back(num);
        solve(n , k-1 , num+1 , temp , ans);
        temp.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>temp;

        solve(n , k , 1 , temp , ans);
        return ans;
    }
};