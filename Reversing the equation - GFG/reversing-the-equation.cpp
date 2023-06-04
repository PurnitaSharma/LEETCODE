//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    {
        stack<string>st;
        int i=0 , n = s.length();
        string temp = "";
        while(i<n)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                st.push(temp);
                string l = "";
                l+=s[i];
                st.push(l);
                temp.clear();
            }
            else
            {
                temp+=s[i];
            }
            i+=1;
        }
        st.push(temp);
        s.clear();
        while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends