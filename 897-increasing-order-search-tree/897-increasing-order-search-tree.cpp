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
    
    TreeNode *dummy = new TreeNode();
    TreeNode *temp = dummy;
    
    
    
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if(!root)
            return NULL;
        
        increasingBST(root->left);
        TreeNode * newNode = new TreeNode(root->val);
        temp ->right = newNode;
        temp = temp -> right;
        increasingBST(root->right);
        
        
        return dummy->right;
    }
};