/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(!node)
            return;
        
        if(!node->next)
            delete node;
        
        swap(node->val, node->next->val);
        
        node->next = node->next->next;
        
        return;
        
    }
};