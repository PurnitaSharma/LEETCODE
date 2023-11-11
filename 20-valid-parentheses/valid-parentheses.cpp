class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int i = 0, j = 0;
        stack<char>st;
        while(i<n)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else
            {
                if(st.empty()) return false;
                char t = st.top();
                if((s[i] == '}' && t == '{') || (s[i] == ')' && t == '(') || (s[i] == ']' && t == '['))
                    {
                        st.pop();
                    }
                    else{
                        return false;
                    }    
            }
            i+=1;
        }
        if(!st.empty()) return false;
        return true;
    }

};