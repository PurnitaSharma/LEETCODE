//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long first(vector<long long> v, long long x)
    {
        long long low=0,high=v.size()-1;
        long long mid=low+(high-low)/2;
        long long ans=-1;
        while(low<=high)
        {
           if(v[mid] == x)
           {
               ans = mid;
               high=mid-1;
           }
           else if(v[mid] > x)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
           mid=low+(high-low)/2;
        }
        return ans;
    }
    long long second(vector<long long> v, long long x)
    {
        long long low=0,high=v.size()-1;
        long long mid=low+(high-low)/2;
        long long ans=-1;
        while(low<=high)
        {
           if(v[mid] == x)
           {
               ans = mid;
               low=mid+1;
           }
           else if(v[mid] > x)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
           mid=low+(high-low)/2;
        }
        return ans;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long ans1=first(v,x);
        long long  ans2=second(v,x);
        pair<long,long> ans;
        if(ans1==-1 && ans2==-1)
        {
            ans.first=-1;
            ans.second=-1;
            return ans;
        }
        ans.first=ans1;
        ans.second=ans2;
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends