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
 
    int sum = 0;
    void dfs(TreeNode * root, int k){
        
        if(!root)
            return;
        
        k= 2 * k  + root->val;
        if(!root->left && !root->right)
        {
            sum+=k;
            return;
        }
        
        
        if(root->left)dfs(root->left, k);
        if(root->right)dfs(root->right, k);
        
        
        
        
        
    }
    
 
    int sumRootToLeaf(TreeNode* root) {
        int k = 0;
        dfs(root, k);
        
        return sum;
        
        
            
        
    }
};