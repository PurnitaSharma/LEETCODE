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
    int find(vector<int>& arr , int n , int element)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i] == element) return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder , int& index , int start , int end , int n)
    {
        if(index>=n || start > end)
        {
            return NULL;
        }
        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int pos = find(inorder , n , element);
        root->left = solve(preorder , inorder , index , start , pos-1 , n);
        root->right = solve(preorder , inorder , index , pos+1 , end , n);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int index = 0;
       return solve(preorder , inorder , index , 0 , n-1 , n);
    
    }
};