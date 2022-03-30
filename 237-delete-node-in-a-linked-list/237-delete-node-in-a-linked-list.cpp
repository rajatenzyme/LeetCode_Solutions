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
        
        if(node -> next == NULL) delete node;
        
        //First Swap node->val with the next's val
        // Then delete next node from the list
        
        swap(node->val, node->next->val);
        
        ListNode *tmp = node->next;
        
        node->next = tmp->next;
        
        delete tmp;
        
        
    }
};