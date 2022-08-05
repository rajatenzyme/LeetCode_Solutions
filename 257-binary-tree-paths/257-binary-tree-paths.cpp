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
    
    vector<string> ans;
    
    void paths(TreeNode * root, string st){
        
        if(!root)
            return;
        if(!root->left && !root->right){
            st+= to_string(root->val);
            ans.push_back(st);
            return;
        }
        
        paths(root->left, st+to_string(root->val)+"->");
        paths(root->right,st+to_string(root->val)+"->");
        
        
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        paths(root, "");
        return ans;
    }
};