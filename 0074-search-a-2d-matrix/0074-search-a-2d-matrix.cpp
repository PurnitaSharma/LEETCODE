class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int low=0;
        int high=rows*cols-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int element = matrix[mid/cols][mid%cols];
            if(element==target)
                return 1;
            else if(element > target)
                high=mid-1;
            else
                low=mid+1;
        }
        return 0;
    }
    
};