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

 void dfs(TreeNode* n)
    {
        swap(n->left,n->right);
        if(n->left) dfs(n->left);
        if(n->right) dfs(n->right);
    }


    TreeNode* invertTree(TreeNode* root) 
    {
        if(!root) return nullptr;

        dfs(root);
        return root;        
    }

};
