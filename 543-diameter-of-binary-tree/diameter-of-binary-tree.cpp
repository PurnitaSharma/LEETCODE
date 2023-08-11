/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> solve(TreeNode* root)
    {
        if(root == NULL) return {0,0};

        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);

        int temp1 = left.first;
        int temp2 = right.first;
        int temp3 = left.second + right.second + 1;

        pair<int,int>ans;
        ans.first = max(temp1 , max(temp2 , temp3));
        ans.second = max(left.second , right.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root == NULL) return 0;
        return solve(root).first-1;
    }
};