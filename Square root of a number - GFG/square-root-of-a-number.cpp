//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long int low=0,high=x;
        long long int mid=low+(high-low)/2;
        long long int ans=-1;
        while(low<=high)
        {
            long long int sq=mid*mid;
            if(sq==x)
            {
                return mid;
            }
            else if(sq > x)
            {
                high=mid-1;
            }
            else
            {
                ans=mid;
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends