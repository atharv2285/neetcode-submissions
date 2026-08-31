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

   bool check(TreeNode* root, TreeNode* subroot)
   {
     if(!root && !subroot) return true;
     if(!root || !subroot) return false;

     if(root->val != subroot->val) return false;

     return check(root->left,subroot->left) && check(root->right,subroot->right);
   }

   bool dfs(TreeNode* root, TreeNode* subroot)
   {  
       if(!root) return false;

       if(root->val == subroot->val)
       {
         bool res = check(root,subroot);
         if(res) return true;
       }
      return ( dfs(root->left,subroot) || dfs(root->right,subroot)); 
   }

    

    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        return dfs(root,subRoot);
    }

};
