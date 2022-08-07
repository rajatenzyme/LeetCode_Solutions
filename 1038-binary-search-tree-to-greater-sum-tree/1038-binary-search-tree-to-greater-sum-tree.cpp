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
    
    void ans(TreeNode * root, int *sum){
        
        if(!root)
            return ;
        
          ans(root->right,sum);
        
            *sum=*sum+root->val;
        root->val=*sum;
           ans(root->left,sum);
        
        
        
 
    }
    
//     TreeNode *inorder(TreeNode *root){
        
//         if(!root)
//             return NULL;
        
//         if(root->left)
//             return inorder(root->left);
        
//         return root;
        
//         if(root->right)
            
//             return inorder(root->right);
        
    
//     }
    
    
    TreeNode* bstToGst(TreeNode* root) {
        
        if(!root)
            return NULL;
        
        int sum =0;
        
        ans(root,&sum);
        
        //inorder(root);
        
//         if(root->left)
//             bstToGst(root->left);
        
//         if(root->right)
//             bstToGst(root->right);
        
        return root;
        
        
        
        
//         if(!root->left && !root->right)
//             return root;
        
//         else 
//             return bstToGst(root->right);
        
        
        
        
    }
};