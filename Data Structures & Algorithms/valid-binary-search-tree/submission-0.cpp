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
   
    bool dfs(TreeNode* root, int mini, int maxi)
    {
        if(!root) return true;

        if(root->val>mini and root->val<maxi) 
        {
            return dfs(root->left,mini,root->val) && dfs(root->right,root->val,maxi);
        }

        return false;
    }

    bool isValidBST(TreeNode* root) 
    {
        int mini = INT_MIN;
        int maxi = INT_MAX;

        if(!root) return true;
        return dfs(root,mini,maxi);
    }
};
