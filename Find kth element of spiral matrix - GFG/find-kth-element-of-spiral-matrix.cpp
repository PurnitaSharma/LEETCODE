//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int sr = 0 , sc = 0 , er = n-1 , ec = m-1 , i=0 , count = 0;
 		if(k > n*m) return -1;
 		while(count < k)
 		{
 		    for(int i=sc;i<=ec && count<k ; i++)
 		    {
 		        count++;
 		        if(count == k) return a[sr][i];
 		    }
 		    sr++;
 		    
 		    for(int i= sr ; i<= er && count<k ; i++){
 		        count++;
 		        if(count == k) return a[i][ec];
 		    } 
 		    ec--;
 		    
 		    for(int i=ec;i>=sc && count<k ; i--)
 		    {
 		        count++;
 		        if(count == k) return a[er][i];
 		    }
 		    er--;
 		    for(int i=er;i>=sr && count<k ; i--)
 		    {
 		        count++;
 		        if(count == k) return a[i][sc];
 		    }
 		    sc++;
 		    
 		}
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends