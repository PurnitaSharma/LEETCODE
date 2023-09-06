class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>m;
        if(s.length() != t.length()) return false;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]) return false;
        }
        return true;
    }
};