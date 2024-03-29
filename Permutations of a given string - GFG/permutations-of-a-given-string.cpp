//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string s , vector<string>& ans , int index)
	    {
	        if(index >= s.size())
	        {
	            ans.push_back(s);
	            return;
	        }
	        for(int i=index ; i< s.size() ; i++)
	        {
	            swap(s[i] , s[index]);
	            solve(s , ans , index+1);
	            swap(s[i] , s[index]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int index = 0;
		    vector<string>ans;
		    solve(S, ans ,index);
		    set<string>s;
		    for(auto i : ans)
		    {
		        s.insert(i);
		    }
		    ans.clear();
		    for(auto i : s)
		    {
		        ans.push_back(i);
		    }
		    sort(ans.begin() , ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends