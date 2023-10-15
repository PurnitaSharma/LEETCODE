//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    
public:
    void solve(vector<int>&arr , int n , int index , int sum , vector<int>& ans)
    {
        if(index >= n)
        {
            ans.push_back(sum);
            return;
        }
        solve(arr , n , index+1 , sum , ans);
        sum += arr[index];
        solve(arr , n , index+1 , sum , ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int index = 0  , sum = 0;
        solve(arr , N , index , sum , ans);
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
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends