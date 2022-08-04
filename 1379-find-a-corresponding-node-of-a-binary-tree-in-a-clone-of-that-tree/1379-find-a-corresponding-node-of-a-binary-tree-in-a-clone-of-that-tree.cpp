/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
//     TreeNode *util(TreeNode *cloned, TreeNode* target){
        
//         if(!cloned)
//             return NULL;
        
//         if(cloned->val == target->val){
//             cout<<cloned->val;
//             return cloned;
//         }
        
        
//         util(cloned->left, target);
//         util(cloned->right, target);    
        
//         return cloned;
    
//     }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(!original)
            return cloned;
        
        
        if(original == target)
            return cloned;
        
        TreeNode * left = getTargetCopy(original->left, cloned->left, target);
        TreeNode *right = getTargetCopy(original->right, cloned->right, target);
        
        if(left)
            return left;
        else
            return right;
        
//         return getTargetCopy(original->left, original->left, target) ? getTargetCopy(original->left, original->left, target) : getTargetCopy(original->right, original->right, target);
        
       // return util(cloned,target);
        
    }
};