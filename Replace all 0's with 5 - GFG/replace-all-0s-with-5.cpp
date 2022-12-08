//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        vector<int>ans;
        while(n>0)
        {
            int r=n%10;
            if(r==0)
            ans.push_back(5);
            else
            ans.push_back(r);
            n=n/10;
        }
        string s="";
        while(!ans.empty())
        {
            s+=to_string(ans.back());
            ans.pop_back();
        }
        int num = stoi(s);
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends