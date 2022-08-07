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
     void ans(TreeNode * root, int &sum){
        
        if(!root)
            return ;
        
        ans(root->right,sum);

        sum += root->val;
        
        root->val= sum;
        
        ans(root->left,sum);

    }
    
    TreeNode* convertBST(TreeNode* root) {
           if(!root)
            return NULL;
        
        int sum = 0;
        
        ans(root,sum);
        
        return root;
    }
};