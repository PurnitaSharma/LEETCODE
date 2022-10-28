class Solution {
public:
    int firstsearch(vector<int>&nums , int n,int target)
{
    int low=0,high=n-1,ans1=-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans1=mid;
                high=mid-1;
            }
            else if(nums[mid] < target)
                low=mid+1;
            else
                high=mid-1;
                
        } 
    return ans1;
}
int secondsearch(vector<int>&nums , int n,int target)
{
        int low=0,high=n-1,mid,ans2=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans2=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
       return ans2;
    
}
vector<int> majorityElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    int n=arr.size();
    int floor = n/3,first,second;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        first=firstsearch(arr,n,arr[i]);
        second=secondsearch(arr,n,arr[i]);
        if((second-first)+1 > floor)
        {
            ans.push_back(arr[i]);
        }
        i=second;
    }
    
    return ans;
    }
};