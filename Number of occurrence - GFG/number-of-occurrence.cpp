//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int first(int nums[], int n, int target)
    {
        int low = 0 , high = n-1 , ans = -1;
        while(low<=high)
        {
            int mid = low+(high - low)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
    int second(int nums[],int n, int target)
    {
        int low = 0 , high = n-1 , ans = -1;
        while(low<=high)
        {
            int mid = low+(high - low)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
	int count(int nums[], int n, int target) {
	    // code here
	    
	    int f = first(nums , n, target );
        int s = second(nums ,n, target );
        if(f==-1 && s==-1) return 0;
        return s-f+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends