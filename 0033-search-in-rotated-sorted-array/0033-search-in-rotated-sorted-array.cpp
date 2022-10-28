class Solution {
public:
    int searchpivot(vector<int>& nums )
    {
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(nums[mid] >= nums[0])
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
    int binarysearch(vector<int>& nums,int low,int high,int target)
    {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid] > target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int pivot=searchpivot(nums);
        int n=nums.size();
        if(nums[pivot]<=target && target<=nums[n-1])
            return binarysearch(nums,pivot,n,target);
        else
            return binarysearch(nums,0,pivot-1,target);
        return -1;
    }
};