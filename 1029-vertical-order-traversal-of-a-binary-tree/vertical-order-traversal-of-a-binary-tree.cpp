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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>>ans;
        if(root == NULL) return ans;

        map<int , map<int , multiset<int>>>nodes;
        queue<pair<TreeNode* , pair<int , int>>>q;
        q.push({root , {0,0}});
        while(!q.empty())
        {
            pair<TreeNode* , pair<int , int>> front = q.front();
            q.pop();
            TreeNode* temp = front.first;
            int hd = front.second.first;
            int l = front.second.second;
            nodes[hd][l].insert(temp->val);
            if(temp->left)
                q.push({temp->left , {hd-1 , l+1}});
            if(temp->right)
                q.push({temp->right , {hd+1 , l+1}});
        }

        for (auto i : nodes) 
        {
            vector<int> column;
            for (auto j : i.second) 
            {
                for (int val : j.second) 
                {
                    column.push_back(val);
                }
            }
            
            ans.push_back(column);
        }
        return ans;

        
    }
};