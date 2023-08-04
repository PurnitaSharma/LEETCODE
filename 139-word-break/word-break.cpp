class Solution {
public:
    bool wordBreak(string s, vector<string>& w) {
         vector<int> dp(s.size()+1,0);
    dp[0]=1;
    unordered_map<string,int> m;
    for(auto i:w)
        m[i]++;
    
    for(int i=1;i<=s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            string x=s.substr(j,i-j);
            
            if(m[x]>0 && dp[j]==1)
            {
                dp[i]=1;
                break;
            }
        }
    }
    
    return dp.back();
    }
};