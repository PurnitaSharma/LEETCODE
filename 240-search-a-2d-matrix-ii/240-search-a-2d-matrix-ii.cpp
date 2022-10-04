class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int r=0;
        int c=cols-1;
        while(r<rows && c>=0)
        {
            int element=matrix[r][c];
            if(element==target)
                return 1;
            else if(element<target)
                r++;
            else
                c--;
        }
        return 0;
    }
};