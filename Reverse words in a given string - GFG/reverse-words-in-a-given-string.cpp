//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans = "";
        stack<string>s;
        string temp = "";
        int n = S.length();
        for(int i=0;i<n;i++)
        {
            if(S[i] == '.')
            {
                s.push(temp);
                temp = "";
            }
            else
            {
                temp += S[i];
            }
        }
        s.push(temp);
        while(!s.empty())
        {
            ans += s.top();
            s.pop();
            if(!s.empty())
                ans += ".";
            //s.pop();
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends