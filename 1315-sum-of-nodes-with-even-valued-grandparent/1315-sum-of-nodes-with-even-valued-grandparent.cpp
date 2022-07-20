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
    // int ans = 0;
    
    int dfs(TreeNode *root, TreeNode *parent, TreeNode *grandparent){
        if(!root)
            return 0;
        
        if(grandparent!=NULL && grandparent->val % 2 == 0){
            return root->val + dfs(root->left, root, parent) + dfs(root->right, root, parent);
        }
        else
            return dfs(root->left, root, parent) + dfs(root->right, root, parent);
    } 
    int sumEvenGrandparent(TreeNode* root) {
        if(!root)
            return 0;
        
        return dfs(root, NULL, NULL);
        //return ans;
    }
};