class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>str;
        for(auto i:s)
        {
            if(str.empty())
                str.push(i);
            else
            {
                if(str.top()==i)
                    str.pop();
                else
                    str.push(i);
            }
        }
        
        string ans;
        while(!str.empty())
        {
            ans+=str.top();
            str.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    
    }
};