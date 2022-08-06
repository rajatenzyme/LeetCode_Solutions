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
    
//     int height (TreeNode * root){
//         if(!root)
//             return 0;
        
//         return 1 + max(height(root->left), height(root->right));
//     }
    
//     int solve(TreeNode * root, int h){

//         if(!root)
//             return 0;
        
//         if(!root->left && !root->right && h==0)
//             return root->val;
        
//          h = h  - 1;
        
//         return solve(root->left, h) + solve(root->right, h);
    
    
//     }
    
    
    int deepestLeavesSum(TreeNode* root) {
        
        int res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            res = 0;
            for (int i = q.size() - 1; i >= 0; --i) {
                TreeNode* node = q.front();
                q.pop();
                res += node->val;
                //cout<<res<<endl;
                if (node->left)  q.push(node->left);
                if (node->right) q.push(node->right);
            }
            //cout<<res<<endl;
        }
        return res;
        
//         int h = height(root);
//         cout<<h<<endl;
        
//         return solve(root, h-1);
        
        
    }
};