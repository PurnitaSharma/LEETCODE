class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        vector<int>left(n) , right(n);

        stack<int>s;
        s.push(0);
        left[0] = 1;
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && arr[i] < arr[s.top()])
                s.pop();
            if(s.empty())
                left[i] = i+1;
            else
                left[i] = i-s.top();
            s.push(i);
        }

        while(s.size()) s.pop();
        s.push(n-1);
        right[n-1] = 1;
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && arr[i] <= arr[s.top()])
                s.pop();
            if(s.empty())
                right[i] = n-i;
            else
                right[i] = s.top()-i;
            s.push(i);
        }

        for(int i=0; i<n; i++) 
            cout << left[i] << " : " << right[i] << endl;

        int res = 0;
        for(int i=0; i<n; i++)
        {
            long long prod = (left[i]*right[i])%mod;
            prod = (prod*arr[i])%mod;
            res = (res + prod)%mod;
        }
        
        return res%mod;
    }
};