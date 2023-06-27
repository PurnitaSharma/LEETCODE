//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
	    // code here
	    //int n = nums.size();
        int count = 0;
        int i= 0 , j= 0;
        while(i<n)
        {
            if(nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
          
            i++;
        }
        i = count-1;
        while(j<n)
        {
            nums[j++] = 0;
            //i++;
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends