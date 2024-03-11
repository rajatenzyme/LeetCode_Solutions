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
    bool isEvenOddTree(TreeNode* root) {

        if(!root)
            return true;

        queue<TreeNode *> q;
        q.push(root);

        int level = 0;

        while(!q.empty()){
            int n = q.size();
            vector<int>levelArr;
            while(n--){
                TreeNode* node = q.front();
                levelArr.push_back(node->val);
                q.pop(); 
                if(node ->left)
                    q.push(node -> left);
                if(node ->right)
                    q.push(node -> right);
            }
            if(level%2 == 0){
                if(levelArr[0] % 2 == 0)
                    return false;
                for(int i=1;i<levelArr.size();i++){
                    if((levelArr[i]<=levelArr[i-1]) || (levelArr[i]%2 == 0))
                        return false;
                }
            }
            else{
                if(levelArr[0] % 2 != 0)
                    return false;
                for(int i=1;i<levelArr.size();i++){
                    if((levelArr[i]>=levelArr[i-1]) || (levelArr[i]%2 != 0))
                        return false;
                }
            }
            level++;
        }

        return true;
        
    }
};