//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int i=0 , j= 0 , ans = INT_MIN;
        while(i<n && j<n)
        {
            if(arr[j] == 1)
            {
                j++;
            }
            else if(arr[j] != 1 && m > 0)
            {
                j++;
                m--;
            }
            else
            {
                while(m<1)
                {
                    if(arr[i] == 0) m++;
                    i++;
                }
            }
            ans = max(ans , j-i);
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends