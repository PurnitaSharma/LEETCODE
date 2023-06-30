//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int n = s.length();
	    int odd = 0, even = 0;
	    for(int i=0;i<n;i++)
	    {
	        if((i%2 == 0) && (s[i] == '1')) even +=1;
	        else if((i%2 == 1) && (s[i] == '1')) odd +=1;
	    }
	    
	    int ans = abs(even - odd);
	    if(ans%3 == 0) return 1;
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends