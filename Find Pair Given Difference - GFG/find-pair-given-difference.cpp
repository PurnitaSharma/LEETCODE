//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        int low=i+1,high=size-1;
        int mid=low+(high-low)/2;
        int num=n+arr[i];
        while(low<=high)
        {
            if(arr[mid]== num)
            {
                return true;
            }
            else if(arr[mid] > num)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
    }
    return false;
    
}