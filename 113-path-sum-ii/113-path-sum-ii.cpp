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
    
    
    void solve(TreeNode * root, int target, vector<int> &path, vector<vector<int>> &ans){
        
        if(!root)
            return;
        path.push_back(root->val);
        
        target -= root->val;
        
        if(!root->left && !root->right){
            if(target == 0){
                ans.push_back(path);
            }
        }
        else{
            solve(root->left,target, path, ans);
            solve(root->right, target, path,ans);
        }

        path.pop_back();
        return;
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans;
        
        vector<int> path;
        solve(root, targetSum, path, ans);
        

        return ans;
        
        
    }
};