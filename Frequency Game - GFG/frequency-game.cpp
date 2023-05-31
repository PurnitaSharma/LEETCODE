//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int , int>m;
        int mini = INT_MAX , ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            mini = min(mini , m[arr[i]]);
            //ans = max(an)
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]] == mini)
            {
                ans = max(ans , arr[i]);
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends