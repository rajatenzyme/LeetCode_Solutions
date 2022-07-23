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
    bool bst(TreeNode *root, TreeNode* min, TreeNode* max){
        
        if(!root)
            return true;
        
        // if(!root->left && !root->right)
        //     return true;
        
        if((min == NULL || root->val> min->val) && (max == NULL ||root->val <max->val))
            return bst(root->left, min, root) 
            && bst(root->right, root, max);
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        
        return bst(root, NULL, NULL);
        
        
        //vector<int> v[n];
        
        //int n = 3, m = 5;
        
        //vector<vector<int>> vis(n,vector<int> (n,0));
        return true;
        
    }
};