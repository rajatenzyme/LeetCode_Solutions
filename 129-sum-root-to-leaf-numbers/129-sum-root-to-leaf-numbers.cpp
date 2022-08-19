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
    int sumNumbers(TreeNode* root) {
        
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        
        int sum = 0;
        
        while(!q.empty()){
            
            TreeNode * curr = q.front().first;
            int tmp = q.front().second;
            q.pop();
            
            tmp = tmp * 10 + curr->val;
            if(curr->left)
                 q.push({curr->left, tmp});
            if(curr->right)
                q.push({curr->right, tmp});
            
            
            if(!curr->left && !curr->right)
                sum+=tmp;
            
            
        }
        
        return sum;
        
    }
};