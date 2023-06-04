//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int pivot(int A[] , int l , int h)
    {
        int low = l;
        int high = h;
        while(low<high)
        {
            int mid = low + (high-low)/2;
            if(A[mid]>=A[0])
            low = mid+1;
            else
            high = mid;
        }
        return low;
    }
    int bs(int A[] , int l , int h , int key)
    {
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(A[mid] == key)
            return mid;
            else if(A[mid] < key)
            l = mid+1;
            else
            h=mid-1;
        }
        return -1;
    }
    int search(int A[], int l, int h, int key)
    {
        int p = pivot(A , l , h);
        if(A[p] <= key && key <= A[h])
            return bs(A , p , h ,  key);
        else
            return bs(A , 0 , p-1 , key);
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends