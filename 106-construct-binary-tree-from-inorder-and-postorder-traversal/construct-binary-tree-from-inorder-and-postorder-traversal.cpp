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
    int findpos(int element, vector<int>& arr , int n )
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i] == element) return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder , int& index , int start , int end , int n)
    {
        if(index < 0 || start > end) return NULL;

        int element = postorder[index--];
        TreeNode* temp = new TreeNode(element);

        int pos = findpos(element , inorder, n);

        temp->right = solve(inorder , postorder , index , pos+1 , end , n);
        temp->left = solve(inorder , postorder , index , start , pos-1 , n);
        return temp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int postindex = n-1;
        return solve(inorder , postorder , postindex , 0 , n-1 , n);

    }
};