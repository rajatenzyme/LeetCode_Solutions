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
    bool ans(TreeNode *root, int val){
        if(!root)
            return true;
        if(val == root->val)
            return ans(root->left, root->val) && ans(root->right, root->val);
    
        else
            return false;
        
        
    }
    
    
    bool isUnivalTree(TreeNode* root) {
        
        if(!root)
            return true;
        
        return ans(root, root->val);
        
        
    }
};