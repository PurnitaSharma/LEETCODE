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
    void inorder(TreeNode* root , vector<int>& arr)
    {
        if(root == NULL) return;
        inorder(root->left ,arr);
        arr.push_back(root->val);
        inorder(root->right , arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        inorder(root , arr);
        int low = 0 , high = arr.size()-1;
        while(low < high)
        {
            if(arr[low] + arr[high] == k) return true;
            else if(arr[low]+arr[high] > k) high--;
            else low++;
        }
        return false;
    }
};