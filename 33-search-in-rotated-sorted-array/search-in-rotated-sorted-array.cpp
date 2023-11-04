class Solution {
public:
    int pivot(vector<int>& nums)
    {
        int low = 0;
        int high = nums.size()-1;
        while(low<high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]>=nums[0])
            low = mid+1;
            else
            high = mid;
        }
        return low;
    }
    int bs(vector<int>& nums, int target, int l , int h)
    {
        int low = l;
        int high = h;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] == target)
            return mid;
            else if(nums[mid] < target)
            low=mid+1;
            else
            high = mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int p = pivot(nums);
       int n = nums.size();
       if(target >= nums[p] && target <= nums[n-1]) return bs(nums , target , p , n-1);
       else return bs(nums , target , 0 , p-1); 
       return -1;
    }
};