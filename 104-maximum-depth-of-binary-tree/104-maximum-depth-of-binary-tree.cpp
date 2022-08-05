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
    
    int solve(TreeNode *root, int d){
        
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return d;
        
        
//         int left = solve(root->left, d+1);
//         int right = solve(root->right, d+1)
        
        return max(solve(root->left, d+1), solve(root->right, d+1));
    
    
    }
    
    
    
    int maxDepth(TreeNode* root) {
        
        if(!root)
            return 0;
        
        return solve(root,1);
        
        
    }
};