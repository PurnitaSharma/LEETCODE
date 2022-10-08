class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
      sort(nums.begin(), nums.end()); 
      vector<int>v; 
      
      vector<vector<int>>vv; 
      int size = nums.size();
      
      if ( size < 3) return vv; 
     
      if ( nums[0] >0 ) return vv;//if first element in sorted array is greater than 0 then no way triplet can be 0
      int j , k ;
      for(int i =0; i<size-2; i++){
        j = i+1, k = size-1;
        while(j<k){
          if ( nums[j] + nums[k] == -nums[i]){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            v.push_back(nums[k]);
            s.insert(v);
            v.clear();
          }
          if ( nums[j] + nums[k] > -nums[i]) k--;
          else j++;         
        }
      }
      for(auto i = s.begin(); i != s.end(); i++){
        vv.push_back(*i);
      }
      return vv;
    }
};