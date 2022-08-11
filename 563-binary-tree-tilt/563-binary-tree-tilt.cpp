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
    
//     int getSum(TreeNode *root){
//         if(!root)
//             return 0;
//         return root->val + getSum(root->left) + getSum(root->right);
//     }
    
//     int sum(TreeNode *root){
//         if(!root)
//             return 0;
//         if(!root->left && !root->right)
//             return 0;
//         return abs(getSum(root->right) - getSum(root->left));
//     }
    
   
    int ans = 0;
    int util(TreeNode *root){
        if(!root)
            return 0;
        int left = util(root->left);
        int right = util(root->right) ;
        ans+= abs(left-right);
        // return root->val + ans
        // cout<<x<<" ";
        // ans+=x;
        // return x;
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
       
        //cout<<sum(root)<<" dfd ";
        util(root);
        return ans;
        
        
        
        return ans;
        
        
        
    }
};