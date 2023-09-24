//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool possible(vector<int> &stalls, int k,int mid)
{
    int count=1;
    int last=stalls[0];
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-last>=mid)
        {
            count++;
            if(count==k)
                return true;
            last=stalls[i];
        }
    }
    return false;
}
    int solve(int n, int k, vector<int> &stalls) {
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int maxi = -1;
        for(int i=0;i<n;i++) maxi = max(maxi , stalls[i]);
        int low = 0 , high = maxi , mid , ans = 0;
        while(low <= high)
        {
            mid = low+(high-low)/2;
            if(possible( stalls , k , mid))
            {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends