class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        int i = 0 , j= 0;
        for(int i=0;i<numRows;i++)
        {
            //ans[i].push_back(1);
            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i) ans[i].push_back(1);
                else
                {
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
        }
        return ans;
    }
};