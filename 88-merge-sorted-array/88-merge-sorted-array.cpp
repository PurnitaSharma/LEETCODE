class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int i=0,j=0,k=0;
        vector<int>nums3(n+m,0);
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
                nums3[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<n)
        {
            nums3[k]=nums1[i];
            i++;
            k++;
        }
        while(j<m)
        {
            nums3[k]=nums2[j];
            j++;
            k++;
        }
        for(int i=0;i<k;i++)
            nums1[i]=nums3[i];
        
    }
};