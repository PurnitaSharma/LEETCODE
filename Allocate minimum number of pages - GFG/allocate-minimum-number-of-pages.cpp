//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool possible(int a[] , int n , long long mid , int m)
    {
        int count = 1 ;
        int pages = 0;
        for(int i=0;i<n;i++)
        {
            if(pages+a[i] <= mid)
                pages += a[i];
            else{
                count+=1;
                if(count > m || a[i] > mid) return false;
                pages = a[i];
            }
            
        }
        return true;
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        long long sum = 0 ;
        if(M > N) return -1;
        for(int i=0;i<N;i++) sum += A[i];
        long long low = 0 , high = sum , mid , ans = -1;
        while(low <= high)
        {
            mid = low+(high-low)/2;
            if(possible(A , N , mid , M))
            {
                ans = mid;
                high = mid-1;
            }
            else low= mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends