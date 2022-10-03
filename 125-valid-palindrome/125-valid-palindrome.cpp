class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]>='0'&&s[i]<='9')
                str.push_back(s[i]);
        }
        int low=0,high=str.size()-1;
        
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        while(low<=high)
        {
            if(str[low]!=str[high])
                return 0;
            else
            {
                low++;
                high--;
            }
        }
        return 1;
    }
};