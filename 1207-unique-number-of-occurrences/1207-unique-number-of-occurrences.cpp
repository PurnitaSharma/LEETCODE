class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
    
    unordered_map<int,int> m;
    
    
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    vector<int>ans;
   
    for(auto i:m) ans.push_back(i.second);
    
    
    set<int>st(ans.begin(),ans.end());
    
    int n=ans.size();
    int y=st.size();
    
    
    if(n==y) return true;
    return false;

    }
};