class Solution {
public:
    bool isValid(string s) {
        int n = s.length() , i = 0;
        stack<char>st;
        while(i < n)
        {
            char c = s[i];
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else{
                if(st.empty()) return false;
                else{
                    char t = st.top();
                    if((s[i] == '}' && t == '{') || (s[i] == ')' && t == '(') || (s[i] == ']' && t == '['))
                    {
                        st.pop();
                    }
                    else{
                        return false;
                    }    
                }
            }
            i+=1;
        }
        if(!st.empty()) return false;
        return true;
    }
};