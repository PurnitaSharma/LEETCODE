//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int first(int arr[], int n, int x)
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
int second(int arr[], int n, int x)
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
vector<int> find(int arr[], int n , int x )
{
    // code here
    int ans1=first(arr,n,x);
        int ans2=second(arr,n,x);
        vector<int>ans;
        
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
}



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends