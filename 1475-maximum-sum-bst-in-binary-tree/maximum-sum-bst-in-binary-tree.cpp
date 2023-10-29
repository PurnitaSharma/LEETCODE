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
    class info{
        public:
            int maxi;
            int mini;
            bool isbst;
            int sum;
    };
    info solve(TreeNode* root , int& ans)
    {
        if(root == NULL) return {INT_MIN , INT_MAX , 1 , 0};
        if(root->left == NULL && root->right == NULL){
            ans = max(ans , root->val);
            return {root->val , root->val , true , root->val};
        }
        info left = solve(root->left , ans);
        info right = solve(root->right , ans);

        info current;
        current.maxi = max(root->val , right.maxi);
        current.mini = min(root->val , left.mini);
        current.sum = root->val + right.sum + left.sum;

        if(left.isbst && right.isbst && (root->val > left.maxi && root->val < right.mini)) current.isbst = true;
        else current.isbst = false;
        if(current.isbst) ans = max(ans , current.sum);
        return current;
    }
public:
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        solve(root , ans);
        return ans;
    }
};