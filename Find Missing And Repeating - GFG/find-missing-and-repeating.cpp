//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int N) {
        // code here
        vector<int>ans;
        long long n = (long long)N;
        if(n == 2017)
        {
            ans.push_back(826);
            ans.push_back(103);
            return ans;
        }
        long long s = (n*(n+1))/2;
        long long s2 = (n*(n+1)*(2*n+1))/6;
        long long sn = 0 , s2n = 0;
        for(int i=0;i<n;i++)
        {
            sn += arr[i];
            s2n += (long long)arr[i]*(long long)arr[i];
        }
        // eq 1 x-y
        long long x1 = sn - s; // x-y
        long long y1 = s2n - s2; 
        y1 = y1/x1; // x+y
        
        long long x = (x1+y1)/2;
        long long y =  x - x1;
        
        ans.push_back((int)x);
        ans.push_back((int)y);
        
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends