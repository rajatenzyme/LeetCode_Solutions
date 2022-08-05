/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    vector<int> postorder(Node* root) {
       
        if(!root)
            return ans;
        
        for(auto it : root->children){
            postorder(it);
        }
        ans.push_back(root->val);
        
            return ans;
    }
};