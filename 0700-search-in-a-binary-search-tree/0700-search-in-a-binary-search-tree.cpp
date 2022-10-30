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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return root;
        TreeNode* node=new TreeNode(); // heap memory 
        if( val < root->val) //search in left subtree
            node=searchBST(root->left,val);
        else if(val > root->val)//search in right subtree
            node=searchBST(root->right,val);
        else
            node=root;//root is the req node
        return node;
    }
};