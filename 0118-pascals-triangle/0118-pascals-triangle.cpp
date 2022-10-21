class Solution {
public:
    vector<vector<int>> generate(int num) {
        
        vector< vector<int>>pascal(num);
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<=i;j++) // each next row will have 1 extra col than previous
            {
                if(j==0 || j==i) // base case + starting and ending col of each row
                    pascal[i].push_back(1);
                else
                    pascal[i].push_back(pascal[i-1][j-1]+pascal[i-1][j]); 
            }
        }
        return pascal;
    }
};