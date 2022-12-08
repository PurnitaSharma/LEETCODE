//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int first(vector<int> &arr, int n, int x)
    {
        int ans1=-1;
        int low=0,high=n-1;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            if(arr[mid]==x)
            {
                ans1=mid;
                high=mid-1;
            }
            else if(arr[mid] > x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid=low+(high-low)/2;
            
        }
        return ans1;
    }
    int second(vector<int> &arr, int n, int x)
    {
        int ans1=-1;
        int low=0,high=n-1;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            if(arr[mid]==x)
            {
                ans1=mid;
                low=mid+1;
            }
            else if(arr[mid] > x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid=low+(high-low)/2;
            
        }
        return ans1;
    }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int ans1=first(arr,n,x);
        int ans2=second(arr,n,x);
        vector<int>ans;
        if(ans1==-1 && ans2==-1)
        {
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends