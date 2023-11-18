class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.length();
        int i;
        for(i=n-1;i>=0;i--)
        {
            if((s[i]-'0')%2 != 0 )
            {
                break;
            }
        }
        string ans;
        for(int j = 0;j<=i;j++) ans+= s[j];
        return ans;
    }
};