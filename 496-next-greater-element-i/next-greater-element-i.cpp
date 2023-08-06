class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>m ,m2;
        int n2 = nums2.size();
        s.push(-1);
        m[nums2[n2-1]] = -1;
        int i = n2-1;
        for(int i=0;i<nums1.size();i++)
            m2[nums1[i]]++;
        while(i>=0)
        {
            if(s.top() > nums2[i])
                m[nums2[i]] = s.top();
            else
            {
                while(s.top() > -1 && s.top() <= nums2[i])
                {
                    s.pop();
                }
                m[nums2[i]] = s.top();
                
            }
            s.push(nums2[i]);
            i--;
        }
        vector<int>ans;
        for(int j=0;j<nums1.size();j++)
        {

            ans.push_back(m[nums1[j]]);
        }
        return ans;
    }
};