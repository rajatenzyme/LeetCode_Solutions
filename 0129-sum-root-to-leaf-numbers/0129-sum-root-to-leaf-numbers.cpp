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
    int util(TreeNode *root, int val){

        if(!root)
            return 0;

        int leaf = 0, left = 0, right = 0;
        if(!root->left && !root->right){
            leaf = root->val + val*10;
        }

        left = util(root->left, val * 10 + root->val);
        right = util(root->right, val * 10 + root->val);

        return leaf + left + right;
    }
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;

        return util(root,0);
    }
};